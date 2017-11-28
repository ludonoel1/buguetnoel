/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "ai.h"
#include <cstdlib>
#include <iostream>
#include <engine/MoveChar.h>
#include <engine/Attack.h>
#include <engine/CheckAround.h>
#include <sys/time.h>


ai::Ai::Ai() {}


ai::Ai::~Ai() {}


void ai::Ai::init(){
    
    engine::MoveChar command1(0,2);
    engine::MoveChar command2(0,4);
    engine::MoveChar command3(0,6);
    engine::MoveChar command4(0,8);
    list_mov.push_back(command1);
    score_mov.push_back(0);
    list_mov.push_back(command2);
    score_mov.push_back(1);
    list_mov.push_back(command3);
    score_mov.push_back(0);
    list_mov.push_back(command4);
    score_mov.push_back(0);

    engine::Attack command5(0,0,5);
    engine::Attack command6(0,1,5);
    engine::Attack command7(0,2,5);
    engine::Attack command8(0,3,5);
    engine::Attack command9(0,4,5);
    engine::Attack command10(0,5,5);
    list_att.push_back(command5);
    score_att.push_back(0);
    list_att.push_back(command6);
    score_att.push_back(0);
    list_att.push_back(command7);
    score_att.push_back(0);
    list_att.push_back(command8);
    score_att.push_back(0);
    list_att.push_back(command9);
    score_att.push_back(0);
    list_att.push_back(command10);
    score_att.push_back(0);
}
