#include <iostream>
using namespace std;

int main() {
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
                break;
            case 'm':
                break;
            case 'q':
                break;
            default:
                cout << "invalid choice. Try again." << endl;
        }

        
    }while(true);


    return 0;
}