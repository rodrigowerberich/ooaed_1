//
// Created by Rodrigo on 11/06/2018.
//

#ifndef OOAED_1_MANDOLIN_H
#define OOAED_1_MANDOLIN_H


#include "MandolinSpec.h"
#include "Instrument.h"

class Mandolin: public Instrument{
public:
    Mandolin(String serialNumber, double price, const MandolinSpec & mandolinSpec):
            Instrument{std::move(serialNumber),price,mandolinSpec}{}

    const MandolinSpec & getMandolinSpec() const;
};


#endif //OOAED_1_MANDOLIN_H
