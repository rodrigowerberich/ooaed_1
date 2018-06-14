//
// Created by Rodrigo on 11/06/2018.
//

#include "MandolinSpec.h"

bool MandolinSpec::operator==(const InstrumentSpec &other) const{
    auto * p = dynamic_cast<const MandolinSpec*>(&other);
    if(p){
        return InstrumentSpec::operator==(other) && this->style == p->style;
    }
    return false;
}

std::unique_ptr<InstrumentSpec> MandolinSpec::getPointer() const{
    return std::make_unique<MandolinSpec>(*this);
}
