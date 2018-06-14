//
// Created by Rodrigo on 11/06/2018.
//

#ifndef OOAED_1_MANDOLINSPEC_H
#define OOAED_1_MANDOLINSPEC_H


#include <utility>
#include "InstrumentSpec.h"

class MandolinSpec: public InstrumentSpec {
public:
    MandolinSpec(Builder builder, String model, Type type, Wood backWood, Wood topWood, Style style):
            InstrumentSpec{builder, std::move(model),type,backWood,topWood},style{style}{}

    const Style & getStyle() const {
        return style;
    }

    std::unique_ptr<InstrumentSpec> getPointer() const override;

    bool operator ==(const InstrumentSpec & other) const override;

private:
    Style style;
};


#endif //OOAED_1_MANDOLINSPEC_H
