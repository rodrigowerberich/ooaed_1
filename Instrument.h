//
// Created by Rodrigo on 11/06/2018.
//

#ifndef OOAED_1_INSTRUMENT_H
#define OOAED_1_INSTRUMENT_H


#include <string>
#include <iostream>
#include "InstrumentSpec.h"

using String = std::string;

class Instrument {
public:
    Instrument()=default;

    template <typename T>
    Instrument(String serialNumber, double price, const T& instrumentSpec):
    serialNumber{std::move(serialNumber)},price{price},instrumentSpec{std::make_unique<T>(instrumentSpec)}{}

    Instrument(const Instrument& other){
        serialNumber = other.serialNumber;
        price = other.price;
        instrumentSpec = other.instrumentSpec->getPointer();
    }

    Instrument& operator=(const Instrument & other);

    const InstrumentSpec &getSpec() const {
        return *instrumentSpec;
    }

    const String &getSerialNumber() const {
        return serialNumber;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double price) {
        Instrument::price = price;
    }

    bool isValid() const{
        return instrumentSpec != nullptr;
    }

private:
    String serialNumber;
    double price;
    std::unique_ptr<InstrumentSpec> instrumentSpec;
};

#endif //OOAED_1_INSTRUMENT_H
