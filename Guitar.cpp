//
// Created by Rodrigo on 06/06/2018.
//

#include "Guitar.h"

const GuitarSpec &Guitar::getGuitarSpec() const{
    return dynamic_cast<const GuitarSpec &>(getSpec());
}
