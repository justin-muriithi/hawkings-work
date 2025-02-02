//cpp program to calculate the volume of a cylinder
/*
REG NO: BSCIT-05-0071/2024
NAME: JUSTIN MURIITHI


*/
#include <iostream>
#include <cmath>

int main() {
    double radius, height, volume;
    const double PI = 3.14159265358979323846;
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;

    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    volume = PI * std::pow(radius, 2) * height;

    std::cout << "The volume of the cylinder is: " << volume << std::endl;

    return 0;
}