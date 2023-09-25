// Copyright (c) 2023 Remy Skelton All right reserved
// .
// Created by: Remy Skelton
// Date: Sep 24 2023
// This program displays the area of a circle.


#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    std::cout << "For a circle with a radius of 17.46 cm:" << std::endl;
    std::cout << std::endl;

    double radius = 17.46;
    double area = M_PI * pow(radius, 2);
    double circumference = 2 * M_PI * radius;

    std::cout << "The area is: " << std::fixed
    << std::setprecision(2) << area
    << " cm^2" << std::endl;
    std::cout << "The circumference is: "
    << std::fixed << std::setprecision(2)
    << circumference << " cm" << std::endl;

    return 0;
}
