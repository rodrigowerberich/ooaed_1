cmake_minimum_required(VERSION 3.10)
project(ooaed_1)

set(CMAKE_CXX_STANDARD 14)

add_executable(ooaed_1 main.cpp Guitar.cpp Guitar.h Inventory.cpp Inventory.h InstrumentEnums.h InstrumentEnums.cpp GuitarSpec.cpp GuitarSpec.h Instrument.cpp Instrument.h InstrumentSpec.cpp InstrumentSpec.h MandolinSpec.cpp MandolinSpec.h utils.h Mandolin.cpp Mandolin.h)