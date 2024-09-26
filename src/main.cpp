#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;


int main(){
    // TODO
    cout << "What score did oyu get for Notebook1";
    double score;
    cin >> score;

    char grade;
    if(score >= 9){
        grade = 'A';
    } else if(score >= 8){
        grade = 'B';
    } else if(score >= 7){
        grade = 'C';
    } else {
        grade = 'D';
    }
    cout << "A score of" << score << "means" << grade << endl;
    
    return 0;
}