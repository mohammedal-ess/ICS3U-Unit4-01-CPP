// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huaifa Khalid
// Created on: April 2022
// This program uses a while loop
//   with user input

#include <iostream>
#include <string>


int main() {
    // this function uses a while loop
    int counter = 0;
    int sumNumber = 0;
    int userNumberInt;
    std::string userNumberStr;

    // input
    std::cout << "Enter a integer: ";
    std::cin >> userNumberStr;

    // process and output
    try {
        userNumberInt = std::stoi(userNumberStr);
        while (counter <= userNumberInt) {
            sumNumber = sumNumber + counter;
            counter += 1;
        }
        std::cout << "\nThe sum  is " << sumNumber << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nsorry it is not an integer.";
        std::cout << "" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}