#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <iomanip>

// process when editing, make ____, ./week05

using namespace std;

int main(){
    double scores[]{80.5, 88, 98, 67, 77};
    
    for(int i = 0; i < 5; i++){ //5 is the tot amount in array
        cout << "Score" << (i + 1) << ": " << scores[i] << (scores[i] < 70 ? "*" : "") << endl; //this is an if else statement in the index
    }

    for(double score : scores){ // for each loop, score is first number in array
        cout << score << endl;
    }

    array<char, 4> html {'H', 'T', 'M', 'L'};

    for(int i = 0; i < html.size(); i++){
        //cout << html[i] << endl << setw(5) << html[i] << endl << setw(10) << html[i] << endl; it is an ARRAY so you can use .size() (replaces i)
        cout << setw(i+2) << html[i] << endl;
    }

    string greeting = "Hello, World!";

    int count {0};

    for(char c  : greeting){
        if (c != ' ') count++; // to remove spaces, or anything you want 
        cout << c << "  ";

    }

    cout << endl << "string size is: " << greeting.size() << "   " << count << endl; //make week05 && ./week05


    greeting.erase(7, 10);
    greeting.replace(7, 10, " ");
    cout << greeting << endl;

    return 0;
}