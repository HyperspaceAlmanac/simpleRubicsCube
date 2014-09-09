#ifndef RUBICKSCUBE_H_INCLUDED
#define RUBICKSCUBE_H_INCLUDED
# include <iostream>

struct Cube {
    std::string frontSide[9];
    std::string topSide[9];
    std::string backSide[9];
    std::string bottomSide[9];
    std::string leftSide[9];
    std::string rightSide[9];
};

class RubicksCube {
    public:
    RubicksCube(std::string vals[6][9]);
    ~RubicksCube();
    Cube getCube();
    void turnFrontSide(bool clockwise);
    void turnBackSide(bool clockwise);
    void turnLeftSide(bool clockwise);
    void turnRightSide(bool clockwise);
    void turnTopSide(bool clockwise);
    void turnBottomSide(bool clockwise);

    void spinUp();
    void spinDown();
    void spinLeft();
    void spinRight();

    void reOrient(std::string frontSide, std::string topSide);
    void printCurrent();

    private:
    Cube cube;
};

#endif // RUBICKSCUBE_H_INCLUDED
