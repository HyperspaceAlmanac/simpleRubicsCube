#include <iostream>
#include "rubicksCube.h"
#include "rubicksCube.cpp"


int main()
{
    std::string testVals[6][9] = {{"Red", "Red", "Red", "Red", "Red", "Red", "Red", "Red", "Red"},
        {"Blue", "Blue", "Blue", "Blue", "Blue", "Blue", "Blue", "Blue", "Blue"},
        {"Green", "Green", "Green", "Green", "Green", "Green", "Green", "Green", "Green"},
        {"Orange", "Orange", "Orange", "Orange", "Orange", "Orange", "Orange", "Orange", "Orange"},
        {"Yellow", "Yellow", "Yellow", "Yellow", "Yellow", "Yellow", "Yellow", "Yellow", "Yellow"},
        {"White", "White", "White", "White", "White", "White", "White", "White", "White"}};
    RubicksCube cubeVal = RubicksCube(testVals);
    cubeVal.printCurrent();
    cubeVal.turnFrontSide(true);
    cubeVal.printCurrent();
    return 0;
}
