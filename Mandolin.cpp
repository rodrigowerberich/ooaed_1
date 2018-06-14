//
// Created by Rodrigo on 11/06/2018.
//

#include "Mandolin.h"

const MandolinSpec &Mandolin::getMandolinSpec() const {
    return dynamic_cast<const MandolinSpec &>(getSpec());;
}
