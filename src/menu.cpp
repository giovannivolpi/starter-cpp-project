#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

int add();
void mult_table(int);

int main() {
    const double PI = 3.1415;
    bool keep_in_loop = true;
    cout << cos(60 * PI / 180);

    do {
        cout << "welcome to our simple menu program" << endl;
        cout << "select an option from the following:" << endl;
        cout << "a) add two things together" << endl;
        cout << "m) show a 12 by 12 multiplication table" << endl;
        cout << "q) to quit" << endl; 

        char choice;
        cin >> choice;

        switch(choice){
            case 'a':
                cout << "result:" << add() << endl;
                break;
            case 'm':
                cout << "result:" << add() << endl;
                break;
            case 'q':
                keep_in_loop = false;
                cout << "goodbye";
                break;
            default:
                cout << "invalid choice. Try again." << endl;
        }

        
    }while(keep_in_loop);


    return 0;
}

int add(){
    bool keep_in = true;
    int a, b;

    cout << "enter 2 intigers:";
    cin >> a >> b;


    return add(a, b);
}

int add(int a, int b){
    return a + b; //overloading, using same name for other int. Can ply work if functions are DIFFERENT.
}

void mult_table(int size){

    for(int r = 0; r < size; r++){
        for(int c = 0; c < size; c++){
            cout << setw(4) << (r + 1) * (c + 1);
        }
        cout <<endl;
    }

}

void print_rectangle_using_stars(int l, int w, bool filled); //TODO