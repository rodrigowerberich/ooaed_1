//
// Created by Rodrigo on 06/06/2018.
//

#ifndef OOAED_1_GUITARENUMS_H
#define OOAED_1_GUITARENUMS_H


#include <string>
using String = std::string;


enum class Type{
    ACOUSTIC, ELECTRIC
};

String TypeEnumToString(Type type);



enum class Builder{
    FENDER,MARTIN,GIBSON,COOLINGS,OLSON,RYAN,PRS,ANY
};

String BuilderEnumToString(Builder type);


enum class Wood{
    INDIAN_ROSEWOOD,BRAZILIAN_ROSEWOOD,MAHOGANY,MAPLE,COCOBOLO,CEDAR,ADIRONDACK,ALDER,SITKA
};

String WoodEnumToString(Wood type);

enum class Style{
    A,F
};

String StyleEnumToString(Style style);

#endif //OOAED_1_GUITARENUMS_H
