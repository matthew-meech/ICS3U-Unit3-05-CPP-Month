// Copyright (c) Matthew Meech
// Created by: Matthew Meech
// Created on: Sep 2021
// This program checks month

#include <iostream>

int main() {
    // checks the month based off number
    char numberofmonth;

    // input
    std::cout << "Enter numberofmonth: ";
    std::cin >> numberofmonth;

    switch (numberofmonth) {
        case '1' :
            std::cout << "Jan" << std::endl;
            break;
        case '2' :
            std::cout << "Feb" << std::endl;
            break;
        default :
            std::cout << "Invalid month number" << std::endl;
    }
}
