//
// Created by Rodrigo on 06/06/2018.
//

#ifndef OOAED_1_INVENTORY_H
#define OOAED_1_INVENTORY_H

#include <vector>
#include <iostream>
#include "Instrument.h"
#include "Guitar.h"
#include "Mandolin.h"
#include "utils.h"

class Inventory {
public:
    Inventory(){
        emplace_unique_ptr<Instrument>(instruments);
    }

    template<typename instrument_type, typename... T>
    void addInstrument(String serialNumber, double price, T &&... t) {
        emplace_unique_ptr<instrument_type>(instruments,serialNumber,price,std::forward<T>(t)...);
    }
    const Instrument& get(String serialNumber);

    template <typename  T, typename TSpec>
    std::vector<T> search(TSpec searchSpec) const{
        std::vector<T> found_instruments;
        for(const auto & instrument:instruments){
            if(instrument->isValid() && searchSpec == instrument->getSpec()){
                auto * new_type = static_cast<T*>(&*instrument);
                found_instruments.push_back(*new_type);
            }
        }
        return found_instruments;
    };
private:
    std::vector<std::unique_ptr<Instrument>> instruments;
};


#endif //OOAED_1_INVENTORY_H
