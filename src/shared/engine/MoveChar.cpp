#include "MoveChar.h"
#include <iostream>
#include "Command.h"

engine::MoveChar::MoveChar(int c, int d) {
    Id=1;
    character=c;
    direction=d;
}

engine::MoveChar::~MoveChar(){
    
}

void engine::MoveChar::setMoveChar(int c, int d){
    this->character = c;
    this->direction = d;
}