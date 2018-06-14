//
// Created by Rodrigo on 11/06/2018.
//

#include "InstrumentSpec.h"

std::unique_ptr<InstrumentSpec> InstrumentSpec::getPointer() const{
    return std::make_unique<InstrumentSpec>(*this);
}

bool InstrumentSpec::operator==(const InstrumentSpec &other) const {
    return this->type == other.type && this->builder==other.builder &&
                  this->topWood == other.topWood && this->backWood == other.backWood &&
                  this->model == other.model;
}