// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on: November 2019
// This program calculates the area of the triangle

#include <iostream>

void Calculate_area(int base, int height) {
    // this function calculates area of the triangle
    int area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "The area of the triangle is " << area << "cm²" << std::endl;
}

main() {
    // input from user
    int base_from_user;
    int height_from_user;

    // input
    std::cout << "Please enter the base of triangle (cm): ";
    std::cin >> base_from_user;
    std::cout << "Please enter the height of triangle (cm): ";
    std::cin >> height_from_user;

    // calling functions
    Calculate_area(base_from_user, height_from_user);
}
