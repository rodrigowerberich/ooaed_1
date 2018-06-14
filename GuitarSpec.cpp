//
// Created by Rodrigo on 07/06/2018.
//

#include <iostream>
#include "GuitarSpec.h"

bool GuitarSpec::operator==(const InstrumentSpec &other) const{
    auto * p = dynamic_cast<const GuitarSpec*>(&other);

    if(p){
        return InstrumentSpec::operator==(other) && this->numStrings == p->numStrings;
    }

    return false;
}

std::unique_ptr<InstrumentSpec> GuitarSpec::getPointer() const{
    return std::make_unique<GuitarSpec>(*this);
}

