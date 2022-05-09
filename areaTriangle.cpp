// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: May 8, 2022
// This program calculates the area of a triangle using functions

#include <iostream>

void CalcArea(float base, float height) {
    // declare variable
    float area;

    // calculate area
    area = base * height / 2;

    // display area
    std::cout << "The area of your triangle is: " << area << "cm^2\n";
}

main() {
    // declare variables
    std::string heightAsString, baseAsString;
    float base, height;

    // get the user input
    std::cout << "Enter the base(cm): ";
    std::cin >> baseAsString;
    std::cout << "Enter the height(cm): ";
    std::cin >> heightAsString;

    try {
        // convert user input to a float
        base = std::stof(baseAsString);
        height = std::stof(heightAsString);
        // call function
        CalcArea(base, height);
    } catch  (std::invalid_argument) {
        std::cout << "Must be a number!";
}
}
