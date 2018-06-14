//
// Created by Rodrigo on 11/06/2018.
//

#ifndef OOAED_1_INSTRUMENTSPEC_H
#define OOAED_1_INSTRUMENTSPEC_H


#include "InstrumentEnums.h"

class InstrumentSpec {
public:
    InstrumentSpec(Builder builder, String model, Type type, Wood backWood, Wood topWood):
            builder{builder},model{model},type{type},backWood{backWood},topWood{topWood}{}

    const String &getModel() const {
        return model;
    }

    const Builder &getBuilder() const {
        return builder;
    }

    const Type &getType() const {
        return type;
    }

    const Wood &getBackWood() const {
        return backWood;
    }

    const Wood &getTopWood() const {
        return topWood;
    }

    virtual std::unique_ptr<InstrumentSpec> getPointer() const;

    virtual bool operator ==(const InstrumentSpec & other) const;

private:
    Builder builder;
    String model;
    Type type;
    Wood backWood;
    Wood topWood;
};

#endif //OOAED_1_INSTRUMENTSPEC_H
