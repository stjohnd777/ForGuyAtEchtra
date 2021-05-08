//
// Created by Daniel St. John on 5/7/21.
//
#include <iostream>
#include <sstream>
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
    bool notValid = true;
    auto movesAvailable = board->Open();
    std::stringstream ss;
    for_each(begin(movesAvailable),end(movesAvailable),[&](int m){
        ss << m << "," ;
    });

    do {
        int cellIndex;
        cout << "enter cell [0-8]  : ";
        cout << "open cells " << ss.str() << " > ";
        cin >> cellIndex;

        if ( cellIndex>8 || cellIndex < 0 ){
            notValid = true;
            cout << "Invalid Selection: must be b/t [0-9]" << endl;
            continue;
        }

        if ( board->IsOpenCell(cellIndex) ){
            board->set(cellIndex, xo);
            notValid = false;
        }else {
            notValid = true;
            cout << "Invalid Selection: Cell Taken" << endl;
            cout << ss.str() << endl;
        }

    }while(notValid);
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
