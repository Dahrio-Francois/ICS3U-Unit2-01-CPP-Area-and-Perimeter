// Copyright (c) 2022 Dahrio Francois All rights reserved
//
// Created by: Dahrio Francois
// Created on: Feb 2022
// This program calculates the area and perimeter of a circle
//    with the radius of 15 mm

#include <iostream>
#include <cmath>

int main() {
    // This function calculates the area and perimeter 
    std::cout << "If a circle has a radius of 15 mm:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is " << (M_PI * pow(15, 2)) << " mm2." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
