//
// Created by Rodrigo on 06/06/2018.
//

#ifndef OOAED_1_GUITAR_H
#define OOAED_1_GUITAR_H

#include <utility>
#include <iostream>
#include "Instrument.h"
#include "GuitarSpec.h"

class Guitar: public Instrument{
public:
    Guitar(String serialNumber, double price,const GuitarSpec & guitarSpec):
        Instrument{std::move(serialNumber),price,guitarSpec}{}

     const GuitarSpec & getGuitarSpec() const;
};


#endif //OOAED_1_GUITAR_H
