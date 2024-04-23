cmake_minimum_required(VERSION 3.24)
project(EKOSYSTEM2)

set(CMAKE_CXX_STANDARD 17)

add_executable(EKOSYSTEM2 main.cpp srodowisko.h srodowisko.cpp ustawienia.h sasiedztwo.h sasiedztwo.cpp osobniki.h osobniki.cpp organizm.cpp organizm.h nisza.h nisza.cpp mieszkaniec.h mieszkanic.cpp generatorlosowy.h generatorlosowy.cpp)
