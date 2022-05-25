// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The volume calculator

#include <iostream>
#include <string>


int volume(int baseNumber, int heightNumber, int lengthNumber) {
    // this function calculates volume
    int volumeNumber;

    volumeNumber = (baseNumber * heightNumber * lengthNumber) /2;

    std::cout << "the volume is " << volumeNumber << " cm³";
}

int main() {
    // this function get base and height then calls the function
    std::string baseString;
    std::string heightString;
    std::string lengthString;
    int base;
    int height;
    int length;

    // input
    std::cout << "enter base (cm): ";
    std::cin >> baseString;
    std::cout << "enter height (cm): ";
    std::cin >> heightString;
    std::cout << "enter lenght (cm): ";
    std::cin >> lengthString;

    // process & output
    try {
        base = std::stoi(baseString);
        height = std::stoi(heightString);
        length = std::stoi(lengthString);

        volume(base, height, length);
    } catch (std::invalid_argument) {
    std::cout << "not a number" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
