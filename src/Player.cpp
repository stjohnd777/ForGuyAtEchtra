//
// Created by Daniel St. John on 5/7/21.
//
#include <iostream>
#include "Player.h"
using namespace std;

/*
 * HumanPlayer
 */
HumanPlayer::HumanPlayer(XO xo, std::shared_ptr <Board> b) {
    this->xo = xo;
    this->board = b;
}
void HumanPlayer::play() {
    int cellIndex;
    cout << "enter cell [0-8] : ";
    cin >> cellIndex;
    board->set(cellIndex, xo);
}

string HumanPlayer::toString() {
    return "Human Player CommandLine" ;
}

/*
 * RandomComputerPlayer
 */
RandomComputerPlayer::RandomComputerPlayer(XO xo, shared_ptr <Board> b) {
    this->xo = xo;
    this->board = b;
}

void RandomComputerPlayer::play() {
    board->set(random(), xo);
    board->show();
}

#include <random>
int RandomComputerPlayer::random() {
    vector<int> v;
    for (int index = 0; index < 9; index++) {
        auto elem = board->get(index);
        if (elem == XO::X || elem == XO::O) {
            continue;
        }
        v.push_back(index);
    }
    int size = v.size();
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(0, size - 1);
    auto random_integer = uni(rng);
    return v[random_integer];
}

string RandomComputerPlayer::toString() {
    return "Random Computer Player" ;
}
//ostream& RandomComputerPlayer::operator<<(ostream& os, const RandomComputerPlayer& p){
//    os << "Random Computer Player" ;
//    return os;
//}
