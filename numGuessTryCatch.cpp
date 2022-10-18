// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 17 2022
// This program asks the user for a number between 0 and 9
// and then sees if they got the same number as the computer

#include <time.h>
#include <string>
#include <iostream>

// declare integer to hold random number

int random_num, userNumAsInt;


int main() {
    // declare userNum as a variable
    std::string userNum;

    // initialize random seed
    srand(time(0));

    // generate a random number between 0 and 9
    random_num = rand() % 9 + 0;

    // get the number the user guessed
    std::cout << "Enter the a number between 0 and 9: ";
    std::cin >> userNum;

    // If statement to see if the user guessed the correct number
    try {
        if (random_num == userNumAsInt) {
            // If true then display "You guessed correctly"
            std::cout << "You guessed correctly \n";

            // Otherwise display " You guessed incorrectly"
        } else {
            std::cout << "You guessed incorrectly \n";
        }
        userNumAsInt = std::stoi(userNum);
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer\n";
    }
}
