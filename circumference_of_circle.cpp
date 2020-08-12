// Copyright (C) 2020 Marcus A. Mosley All rights reserved
//
// Created by Marcus A. Mosley
// Created on August 2020
// This program calculates the circumference of a circle
//   with user input using tau

#include <iostream>

int main()  {
    // This function calculates circumference
    const double TAU = 6.28;
    int radius;
    double circumference;

    // Input
    std::cout << "Enter radius of circle (mm): ";
    std::cin >> radius;

    // Process
    circumference = TAU * radius;

    // Output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << "mm" << std::endl;
}
