//
// Created by Rodrigo on 06/06/2018.
//

#include "Inventory.h"
#include "utils.h"


const Instrument& Inventory::get(String serialNumber){
    auto found = std::find_if(instruments.begin(),instruments.end(),
                 [&serialNumber](const std::unique_ptr<Instrument> & m) -> bool {return m->getSerialNumber() == serialNumber;});
    if(found == instruments.end()){
        return *instruments[0];
    }else{
        return **found;
    }
}