#ifndef _DICE
#define _DICE

#include "State.hpp"

class Dice{
    vector<State*> states;

    public: 
    Dice(vector<State*> s){
        states = s; 
    }

    void addState(State* state);
    int getStateByIdx(int idx); 
    void roll(); 
    int randomNum(); 
}; 

#endif 