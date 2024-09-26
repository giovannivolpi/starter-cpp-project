#include <iostream>
#include <array>
#include <vector>
#include <string>

// process when editing, make ____, ./week05

using namespace std;

int main(){
    double scores[]{80.5, 88, 98, 67, 77};
    
    for(int i = 0; i < 5; i++){ //5 is the tot amount in array, i++ is adding more to it
        cout << "Score" << (i + 1) << ": " << scores[i] << (scores[i] < 70 ? "*" : "") << endl; //this is an if else statement in the condition statement 
    }


    return 0;
}