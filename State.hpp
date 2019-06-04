#ifndef _STATE
#define _STATE

#include <cmath>
#include <iomanip>
#include <iostream> 
#include <map>
#include <vector>
#include <ctime> 

using std::string;
using std::cout; 
using std::endl; 
using std::map;
using std::stringstream;
using std::vector;

class State{
    public: 
    int stateIdX; 
    State* option0; 
    State* option1; 
    
    int result0; 
    int result1; 

    int getIdx(){return stateIdX;}


    // State(int _idx, int res0, int res1){
    //     stateIdX = _idx;
    //     result0 = res0;
    //     result1 = res1; 
    // }

}; 

#endif 
 