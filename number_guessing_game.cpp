// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This program is number guessing game

#include <iostream>
#include <random>

int main() {
    // this function checks if number is not 5
    int someRandomNumber;
    int yournumber;

    // input
    std::cout << "Enter the number : ";
    std::cin >> yournumber;
    std::cout << "" << std::endl;

    // process
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 9);  // [1, 9]
    someRandomNumber = idist(rgen);

    if (yournumber == someRandomNumber) {
        // output
        std::cout << "You are right!";
        std::cout << "" << std::endl;
        std::cout << "random number is " << someRandomNumber << std::endl;
    } else {
        std::cout << "you are wrong";
        std::cout << "" << std::endl;
        std::cout << "random number is " << someRandomNumber << std::endl;
    }
}

