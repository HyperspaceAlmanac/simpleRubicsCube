#include <iostream>
#include "rubicksCube.h"

// The constructor that takes in an 2D array of strings
RubicksCube::RubicksCube(std::string vals[6][9]) {
    //Set up the Rubicks cube for 6 sides
    //For each side, create a deep copy of color
    for (int i = 0; i < 9; i++) {
        cube.frontSide[i] = vals[0][i];
        cube.topSide[i] = vals[1][i];
        cube.backSide[i] = vals[2][i];
        cube.bottomSide[i] = vals[3][i];
        cube.leftSide[i] = vals[5][i];
        cube.rightSide[i] = vals[6][i];
    }
}

RubicksCube::~RubicksCube() {
    std::cout << "Destructor called" << std::endl;
}

void RubicksCube::turnFrontSide(bool clockwise) {
    std::string originalFront[9];
    std::string originalTop[9];
    std::string originalBottom[9];
    std::string originalLeft[9];
    std::string originalRight[9];

    for (int i = 0; i < 9; i++) {
        originalFront[i] = cube.frontSide[i];
        originalTop[i] = cube.topSide[i];
        originalBottom[i] = cube.bottomSide[i];
        originalLeft[i] = cube.leftSide[i];
        originalRight[i] = cube.rightSide[i];
    }

    if (clockwise) {
        cube.frontSide[0] = originalFront[6];
        cube.frontSide[1] = originalFront[3];
        cube.frontSide[2] = originalFront[0];
        cube.frontSide[3] = originalFront[7];
        cube.frontSide[5] = originalFront[1];
        cube.frontSide[6] = originalFront[8];
        cube.frontSide[7] = originalFront[5];
        cube.frontSide[8] = originalFront[2];

        cube.topSide[6] = originalLeft[6];
        cube.topSide[7] = originalLeft[7];
        cube.topSide[8] = originalLeft[8];

        cube.leftSide[6] = originalBottom[6];
        cube.leftSide[7] = originalBottom[7];
        cube.leftSide[8] = originalBottom[8];

        cube.bottomSide[6] = originalRight[6];
        cube.bottomSide[7] = originalRight[7];
        cube.bottomSide[8] = originalRight[8];

        cube.rightSide[6] = originalTop[6];
        cube.rightSide[7] = originalTop[7];
        cube.rightSide[8] = originalTop[8];
    } else {
        cube.frontSide[0] = originalFront[2];
        cube.frontSide[1] = originalFront[5];
        cube.frontSide[2] = originalFront[8];
        cube.frontSide[3] = originalFront[1];
        cube.frontSide[5] = originalFront[7];
        cube.frontSide[6] = originalFront[0];
        cube.frontSide[7] = originalFront[3];
        cube.frontSide[8] = originalFront[6];

        cube.topSide[6] = originalRight[6];
        cube.topSide[7] = originalRight[7];
        cube.topSide[8] = originalRight[8];

        cube.leftSide[6] = originalTop[6];
        cube.leftSide[7] = originalTop[7];
        cube.leftSide[8] = originalTop[8];

        cube.bottomSide[6] = originalLeft[6];
        cube.bottomSide[7] = originalLeft[7];
        cube.bottomSide[8] = originalLeft[8];

        cube.rightSide[6] = originalBottom[6];
        cube.rightSide[7] = originalBottom[7];
        cube.rightSide[8] = originalBottom[8];
    }


}

void RubicksCube::turnBackSide(bool clockwise) {
    std::cout << "In Progress";

}

void RubicksCube::turnLeftSide(bool clockwise) {
    std::cout << "In Progress";

}

void RubicksCube::turnRightSide(bool clockwise) {
    std::cout << "In Progress";

}

void RubicksCube::turnTopSide(bool clockwise) {
    std::cout << "In Progress";

}

void RubicksCube::turnBottomSide(bool clockwise) {
    std::cout << "In Progress";

}

void RubicksCube::spinUp() {

}

void RubicksCube::spinDown() {

}

void RubicksCube::spinLeft() {

}

void RubicksCbue::spinRight() {

}
//call helper function
void RubicksCube::reOrient(std::string frontSide, std::string topSide) {
    if (frontSide == "front") {
        frontIdex = 0;

    } else if (frontSide == "top") {

    } else if (frontSide == "back") {

    } else if (frontSide == "bottom") {

    } else if (frontSide == "left") {

    } else if (frontSide == "right") {

    }

}

void RubicksCube::printCurrent() {
    int count;

    count = 0;
    std::cout << "Front:\n";
    for (int i = 0; i < 9; i++) {
        std::cout << cube.frontSide[i] << " ";
        count++;
        if (count > 1 and count % 3 == 0) {
            std::cout << "\n";
        };
    }
    std::cout << std::endl;

    count = 0;
    std::cout << "Top:\n";
    for (int i = 0; i < 9; i++) {
        std::cout << cube.topSide[i] << " ";
        count++;
        if (count > 1 and count % 3 == 0) {
            std::cout << "\n";
        };
    }
    std::cout << std::endl;

    count = 0;
    std::cout << "Back:\n";
    for (int i = 0; i < 9; i++) {
        std::cout << cube.backSide[i] << " ";
        count++;
        if (count > 1 and count % 3 == 0) {
            std::cout << "\n";
        };
    }
    std::cout << std::endl;

    count = 0;
    std::cout << "Back:\n";
    for (int i = 0; i < 9; i++) {
        std::cout << cube.bottomSide[i] << " ";
        count++;
        if (count > 1 and count % 3 == 0) {
            std::cout << "\n";
        };
    }
    std::cout << std::endl;

    count = 0;
    std::cout << "Left:\n";
    for (int i = 0; i < 9; i++) {
        std::cout << cube.leftSide[i] << " ";
        count++;
        if (count > 1 and count % 3 == 0) {
            std::cout << "\n";
        };
    }
    std::cout << std::endl;

    count = 0;
    std::cout << "Right:\n";
    for (int i = 0; i < 9; i++) {
        std::cout << cube.rightSide[i] << " ";
        count++;
        if (count > 1 and count % 3 == 0) {
            std::cout << "\n";
        };
    }
    std::cout << std::endl;
}


