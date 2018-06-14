#include <iostream>

#include "Inventory.h"
#include "utils.h"

void initializeInventory(Inventory & inventory){
    inventory.addInstrument<Guitar>("123", 1455, GuitarSpec{Builder::FENDER, "Stratocastor", Type::ELECTRIC, 6, Wood::ALDER, Wood::ALDER});
    inventory.addInstrument<Guitar>("456", 1500, GuitarSpec{Builder::FENDER, "Stratocastor", Type::ELECTRIC, 6, Wood::ALDER, Wood::ALDER});
    inventory.addInstrument<Mandolin>("789",1245, MandolinSpec{Builder::RYAN, "Other", Type::ACOUSTIC, Wood::ALDER, Wood::ADIRONDACK, Style::A });
}

int main() {
    Inventory inventory;
    initializeInventory(inventory);
    GuitarSpec whatErinLikes{Builder::FENDER,"Stratocastor",Type::ELECTRIC,6,Wood::ALDER,Wood::ALDER};
    auto guitars = inventory.search<Guitar>(whatErinLikes);
    if(!guitars.empty()){
        std::cout << "You might like these guitars:" << std::endl;
        for(const auto & guitar:guitars){
            std::cout << "We have a " << BuilderEnumToString(guitar.getGuitarSpec().getBuilder()) << " "
                      << guitar.getGuitarSpec().getModel() << " " << std::to_string(guitar.getGuitarSpec().getNumStrings()) <<"-string "<<TypeEnumToString(guitar.getGuitarSpec().getType())<<" guitar:\n"
                      << WoodEnumToString(guitar.getGuitarSpec().getBackWood()) << " back and side,\n"
                      << WoodEnumToString(guitar.getGuitarSpec().getTopWood()) << " top.\n"
                      << "You can have it for only $"<< std::to_string(guitar.getPrice()) << "!\n----\n";
        }
    }else{
        std::cout << "Sorry no guitar found" << std::endl;
    }

    MandolinSpec whatJohnLikes{Builder::RYAN, "Other", Type::ACOUSTIC, Wood::ALDER, Wood::ADIRONDACK, Style::A};
    auto mandolins = inventory.search<Mandolin>(whatJohnLikes);
    if(!mandolins.empty()){
        std::cout << "You might like these mandolins:" << std::endl;
        for(const auto & mandolin:mandolins){
            std::cout << "We have a " << BuilderEnumToString(mandolin.getMandolinSpec().getBuilder()) << " "
                      << mandolin.getMandolinSpec().getModel() << " " << StyleEnumToString(mandolin.getMandolinSpec().getStyle()) <<"-style "<<TypeEnumToString(mandolin.getMandolinSpec().getType())<<" mandolin:\n"
                      << WoodEnumToString(mandolin.getMandolinSpec().getBackWood()) << " back and side,\n"
                      << WoodEnumToString(mandolin.getMandolinSpec().getTopWood()) << " top.\n"
                      << "You can have it for only $"<< std::to_string(mandolin.getPrice()) << "!\n----\n";
        }
    }else{
        std::cout << "Sorry no guitar found" << std::endl;
    }
    return 0;
}