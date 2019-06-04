#include "Dice.hpp"

//Compile: g++ -std=c++17 main.cpp Dice.cpp -o main; .\main.exe

int main(){
    State* state7; 
    State* state6; 
    State* state5;
    State* state4; 
    State* state3;
    State* state2;
    State* state1; 
    State* state0; 

    cout << "main started" << endl;

    //state7->stateIdX = 7;
    cout << "state7" << endl;
    state6->stateIdX = 6; state6->result0 = 6; state6->result1 = 6; 
    cout << "state6" << endl;
    state5->stateIdX = 5; state5->result0 = 4; state6->result1 = 5;
    state4->stateIdX = 4; state4->result0 = 2; state6->result1 = 3;
    state3->stateIdX = 3; state3->result0 = 1; state6->result1 = 1;
    state2->stateIdX = 2; state6->option0 = state5; state6->option1 = state6;
    state1->stateIdX = 1; state6->option0 = state3; state6->option1 = state4;
    state0->stateIdX = 0; state6->option0 = state1; state6->option1 = state2;
 

    vector<State*> s; 
    Dice d(s); 

    d.addState(state0);
    d.addState(state1);
    d.addState(state2);
    d.addState(state3);
    d.addState(state4);
    d.addState(state5);
    d.addState(state6);

    cout << "just before roll"; 
    d.roll(); 
    // for (int i = 0; i < 100; i++){
    //         d.roll();
    // }
    // return 0; 
}

