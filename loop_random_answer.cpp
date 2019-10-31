// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This function checks if the user guessed the number
//   with a loop

#include <iostream>
#include <string>
#include <time.h>   /* time */

int main() {
    // This function checks if the user guessed the number

    /* initialize random seed: */
    srand(time(NULL));

    int randomanswer = rand() % 100 + 1;
    std::string guess;
    int guess_as_num;

    // input
    std::cout << "Guess what number I'm thinking of! (between 1 & 100)"
    << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // process
        try {
            guess_as_num = std::stoi(guess);
            if (guess_as_num == randomanswer) {
                // output
                std::cout << "You are correct!" << std::endl;
                break;
            } else {
                std::cout << "Please try again." << std::endl;
            }
        } catch (std::invalid_argument) {
         std::cout << "That is invalid. Try again." << std::endl;
        }
    }
}
