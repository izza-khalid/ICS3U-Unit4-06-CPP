// Copyright (c) 2019 Izza Khalid All rights reserved.
//
// Created by: Izza Khalid
// Created on: October 2019
// This program uses a nested loop

#include <iostream>

main() {
    // this function uses a nested loop
    int counter1;
    int counter2;
    int counter3;

    // process & output
    for (counter1 = 0; counter1 < 256; counter1++) {
        for (counter2 = 0; counter2 < 256; counter2++) {
            for (counter3 = 0; counter3 < 256; counter3++) {
                std::cout << "RGB(" << counter1 << ", " << counter2 << ", "
                          << counter3 << ")" << std::endl;
            }
        }
    }
}