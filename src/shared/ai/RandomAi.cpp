/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "RandomAi.h"

ai::RandomAi::RandomAi() {
    Id=1;
}
ai::RandomAi::~RandomAi() {}
ai::RandomAi::RandomAi(int team) {
    Id=1;
    Team=team;
}