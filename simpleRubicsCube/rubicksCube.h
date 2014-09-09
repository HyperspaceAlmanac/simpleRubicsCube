#ifndef RUBICKSCUBE_H_INCLUDED
#define RUBICKSCUBE_H_INCLUDED
# include <iostream>

struct Cube {
    std::string frontSide[9];
    std::string backSide[9];
    std::string leftSide[9];
    std::string rightSide[9];
    std::string topSide[9];
    std::string bottomSide[9];
};

class RubicksCube {
    RubicksCube(std::string vals[6][9]);
    ~RubicksCube();
    Cube getCube();
    void turnForwardSide();
    void turnBackSide();
    void turnLeftSide();
    void turnRightSide();
    void turnTopSide();
    void turnBottomSide();

    private:
    Cube cube;
};

#endif // RUBICKSCUBE_H_INCLUDED
