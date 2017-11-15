/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Ai.h"
#include <cstdlib>
#include <iostream>
#include <engine/MoveChar.h>
#include <engine/Attack.h>
#include <sys/time.h>


ai::Ai::Ai(){
    
    
}


ai::Ai::~Ai(){
    
}

void ai::Ai::init(){
    
    engine::MoveChar command1(0,2);
    engine::MoveChar command2(0,4);
    engine::MoveChar command3(0,6);
    engine::MoveChar command4(0,8);
    list_mov.push_back(command1);
    list_mov.push_back(command2);
    list_mov.push_back(command3);
    list_mov.push_back(command4);
    
    engine::Attack command5(0,0,5);
    engine::Attack command6(0,1,5);
    engine::Attack command7(0,2,5);
    engine::Attack command8(0,3,5);
    engine::Attack command9(0,4,5);
    engine::Attack command10(0,5,5);
    list_att.push_back(command5);
    list_att.push_back(command6);
    list_att.push_back(command7);
    list_att.push_back(command8);
    list_att.push_back(command9);
    list_att.push_back(command10);
}

void ai::Ai::play(engine::Engine& engine,int character,state::State& state){
    if (Id==1){
        
         struct timeval time; 
         gettimeofday(&time,NULL);
         std::srand((time.tv_sec * 1000) + (time.tv_usec / 1000));

        
        
        
        if(state.list_element[character].Team==Team){
            
                if(engine.mov_left!=0){
                    
                     int random=std::rand();
                     engine::Command command=list_mov[random%list_mov.size()];
                     command.setCharacter(character);
                    engine.addCommand(command);}else
                    {
                     if(engine.att_left!=0){
                        
                         int random=std::rand();
                      engine::Command command=list_att[(random+1)%list_att.size()];
                      command.setAttaquant(character);
                    engine.addCommand(command);
                     }
                    }
                }//else{
            //std::cout<<"Ce n'est pas le tour de l'IA "<<Team<<std::endl;
               // }
        }
       
    
}

