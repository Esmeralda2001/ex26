#include "Dice.hpp"

void Dice::addState(State* state){
    states.push_back(state); 
}

int Dice::getStateByIdx(int idx){
    for(int i = 0; i<states.size(); i++){
        if(states[i]->stateIdX == idx){
            return i; 
        }
    }
    return -1; 
}

int Dice::randomNum(){
    return rand()%2; 
}

void Dice::roll(){
    vector<int> path; 

    cout << "function called"; 

    int result = 0;
    State* currentState = states[getStateByIdx(0)]; 
    path.push_back(0); 

    while(result == 0){
        cout << currentState->getIdx(); 
        int num = randomNum(); 
        cout << num; 

        if (currentState->getIdx() == 3){
            if(randomNum() != 0){
                currentState = states[getStateByIdx(1)];
                path.push_back(currentState->getIdx());
            }
        }

        if (currentState->getIdx() == 6){
            if(randomNum() != 0){
                currentState = states[getStateByIdx(2)];
                path.push_back(currentState->getIdx());
            }
        }
    
        State* prevState = currentState; 

        if (num==0){
            currentState = currentState->option0;
        }else{
            currentState = currentState->option1;
        }

        if (currentState->getIdx() == 7){
            if (num==0){
                result = prevState->result0;
            }else{
                result = prevState->result1; 
            }
        }else{
            path.push_back(currentState->getIdx()); 
        }
    }

    path.push_back(result); 
    cout << result; 
}