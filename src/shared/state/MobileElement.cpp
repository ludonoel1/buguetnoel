/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "MobileElement.h"

namespace state{
    MobileElement::MobileElement() {}
    MobileElement::~MobileElement() {}

        void MobileElement::Attack (MobileElement victime){
	victime.getDamage(ATK); ;
}


void MobileElement::getDamage(int damage) {
        Life -= damage;
        std::cout << "Un " << Name << " reçoit des dégâts !" << std::endl;
        //if (!isAlive()) { std::cout << "Un " << Name << " est mort :(" << std::endl;}
    }

bool MobileElement::isAlive() {
            return Life > 0 ;
    }
	
}