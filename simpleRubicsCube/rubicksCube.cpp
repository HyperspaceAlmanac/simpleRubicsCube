#include <iostream>
#include "rubicksCube.h"

// The constructor that takes in an 2D array of strings
RubicksCube::RubicksCube(std::string vals[6][9]) {
    //Set up the Rubicks cube for 6 sides
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 9; j++) {
            cube[i][j] = vals[i][j];

        }

    }

}


