//
// Created by Rodrigo on 07/06/2018.
//

#ifndef OOAED_1_GUITARSPEC_H
#define OOAED_1_GUITARSPEC_H

#include "InstrumentEnums.h"
#include "InstrumentSpec.h"

class GuitarSpec: public InstrumentSpec {
public:
    GuitarSpec(Builder builder, String model, Type type, int numStrings, Wood backWood, Wood topWood):
    InstrumentSpec{builder,model,type,backWood,topWood},numStrings{numStrings}{}

    int getNumStrings() const {
        return numStrings;
    }

    std::unique_ptr<InstrumentSpec> getPointer() const override;

    bool operator ==(const InstrumentSpec & other) const override;

private:
    int numStrings;
};


#endif //OOAED_1_GUITARSPEC_H
