//
// Created by Rodrigo on 11/06/2018.
//

#include "Instrument.h"

Instrument &Instrument::operator=(const Instrument &other) {
    serialNumber = other.serialNumber;
    price = other.price;
    instrumentSpec = other.instrumentSpec->getPointer();
    return *this;
}
