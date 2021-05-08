//
// Created by Daniel St. John on 5/7/21.
//

#include "Board.h"

#include <iostream>
#include <algorithm>

using namespace std;

Board::Board(){
    for ( int i = 0; i < N*N; i++){
        board[i] =CellState::OPEN;
    }
    //fill(begin(*board),end(*board),CellState::OPEN);
}

int Board::get(int index) {
    // TODO :: out of range
    return board[index];
}

int Board::get(int row, int col){
    // TODO :: out of range
    return get(index(row,col));
}

void Board::set(int index, XO xo) {
    board[index] = (char)xo;
}

void Board::set(int row, int col, XO xo) {
    // TODO :: out of range
    board[index(row, col)] = xo;
}

void Board::show() {
    cout << "0:" << board[index(0, 0)] << "|" << "1:" << board[index(0, 1)] << "|" << "2:" << board[index(0, 2)] << endl;
    cout << "___________" << endl;
    cout << "3:" << board[index(1, 0)] << "|" << "4:" << board[index(1, 1)] << "|" << "5:" << board[index(1, 2)] << endl;
    cout << "___________" << endl;
    cout << "6:" << board[index(2, 0)] << "|" << "7:" << board[index(2, 1)] << "|" << "8:" << board[index(2, 2)] << endl;
}

bool Board::MovesLeft() {
    int counter = 0;
    //vector<int> v;
    for_each(begin(board), end(board), [&](int elem) {
        if (elem == CellState::OPEN) {
            counter++;
        }
    });
    return counter > 0 ? true : false;
}

vector<int> Board::Open() {
    int counter = 0;
    std::vector<int> v;
    for (int index = 0; index < 9; index++) {
        auto elem = get(index);
        if (elem == XO::X || elem == XO::O) {
            continue;
        }
        v.push_back(index);
    }
    return v;
}

bool Board::IsOpenCell(int index) {
    return board[index] == CellState::OPEN;
}

int Board::index(int row, int col) {
    // TODO :: out of range
    return col + row * N;
}