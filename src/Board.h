//
// Created by Daniel St. John on 5/7/21.
//
#pragma once
#include <array>
#include <memory>

#include "Common.h"

class Board {
public:
    Board();
    int get(int index);
    int get(int row, int col);
    void set(int index, XO xo);
    void set(int row, int col, XO xo) ;
    void show();
    bool MovesLeft();
protected:
    int N = 3;
    char X = CellState::CONTAINS_X;
    char O = CellState::CONTAINS_O;
    std::array<char, 9> board;
    int index(int row, int col) ;
};

