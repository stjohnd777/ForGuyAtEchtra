//
// Created by Daniel St. John on 5/7/21.
//
#pragma once
#include <memory>
#include <iostream>
#include "Common.h"
#include "Board.h"
#include <string>
#include <functional>

class Player {
public:
    virtual void play() = 0;
    virtual std::string toString() = 0;

protected :
    XO xo;
    std::shared_ptr<Board> board;
};

class HumanPlayer : public Player {
public:
    HumanPlayer(XO xo, std::shared_ptr<Board> b);
    virtual void play();
    virtual std::string toString();
};

class RandomComputerPlayer : public Player {
public:
    RandomComputerPlayer(XO xo, std::shared_ptr<Board> b) ;
    virtual void play();
    virtual std::string toString();
 private:
    int random();
};

class FunctionalPlayer : public Player {
public:
    FunctionalPlayer(XO xo, std::shared_ptr<Board> b){
        this->xo = xo;
        this->board = b;
    }
    // pass in the behavior is so desired
    void setPlay(std::function<void( std::shared_ptr<Board>)> f){
        this->f = f;
    }
    virtual void play(){
        f(board);
    }
    virtual std::string toString(){
        return "Function Player" ;
    }
protected:
    std::function<void( std::shared_ptr<Board>)> f;
};
