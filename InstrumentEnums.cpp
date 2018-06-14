//
// Created by Rodrigo on 06/06/2018.
//

#include "InstrumentEnums.h"
using String = std::string;

String TypeEnumToString(Type type){
    const char * names [] = {"ACOUSTIC","ELECTRIC"};
    return names[static_cast<int>(type)];
//    switch (type){
//        case Type::ACOUSTIC :
//            return "ACOUSTIC";
//        case Type::ELECTRIC :
//            return "ELECTRIC";
//    }
}

String WoodEnumToString(Wood type){
    switch (type){
        case Wood::INDIAN_ROSEWOOD :
            return "INDIAN_ROSEWOOD";
        case Wood::BRAZILIAN_ROSEWOOD :
            return "BRAZILIAN_ROSEWOOD";
        case Wood::MAHOGANY :
            return "MAHOGANY";
        case Wood::MAPLE :
            return "COOLINGS";
        case Wood::COCOBOLO :
            return  "COCOBOLO";
        case Wood::CEDAR:
            return  "CEDAR";
        case Wood::ADIRONDACK :
            return "ADIRONDACK";
        case Wood::ALDER :
            return "ALDER";
        case Wood::SITKA :
            return "SITKA";
    }
}

String BuilderEnumToString(Builder type){
    switch (type){
        case Builder::FENDER :
            return "FENDER";
        case Builder::MARTIN :
            return "MARTIN";
        case Builder::GIBSON :
            return "GIBSON";
        case Builder::COOLINGS :
            return "COOLINGS";
        case Builder::OLSON :
            return  "OLSON";
        case Builder::RYAN:
            return  "RYAN";
        case Builder::PRS :
            return "PRS";
        case Builder::ANY :
            return "ANY";
    }
}

String StyleEnumToString(Style style) {
    switch (style){
        case Style::A :
            return "A";
        case Style::F :
            return "F";
    }
}
