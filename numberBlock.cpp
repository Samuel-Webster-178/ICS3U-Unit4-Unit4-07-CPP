// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>

int main() {
    // this function prints numbers in columns of 5
    int MIN = 1000;
    int MAX = 2000;
    int NUMBERS_PER_LINE = 5;
    int i;

    // process & output
    for (i = MIN; i <= MAX; i++) {
        if (i % NUMBERS_PER_LINE == 0) {
            std::cout << "\n";
        } else {
            std::cout << " ";
        }
        std::cout << i;
    }
    std::cout << "\n\nDone." << std::endl;
}
