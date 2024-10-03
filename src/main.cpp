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





//int add(int a, int b, int* r){
    //int r;
    //r = a + b;
    //return r;}

//int sub(int a, int b){
    //int * r = new int;

    //*r = a - b;

    //return *r;} how to not use a pointer     int n = 100;

    int* ptr = nullptr; //points nowhere in the storage data

    cout << n << endl;

    ptr = &n;

    cout << ptr << endl; // gives the address
    cout << *ptr << endl; //de-referencing, looking what's inside but not going in, it will print 100 because you do not go in to see the code
    cout << &n << endl;

    double* dptr = new double; //asking the OS to find 8 bites bc double is 8bites.
    *dptr = 3.14; //storing the value pie with the 8bites
    cout << *dptr << endl; //showing the 3.14 within the OS de-referencing

    delete dptr; //removing the pointer 
    dptr = nullptr; //returning the key. Completly forget the key


    int* ids = new int[1000]; //stating you want 4000bites of space
    for(int i = 0; i < 1000; i++){
        ids[i] = i + 1;
    }


    for(int i = 0; i < 1000; i++){
        cout << ids[i] << ',';
        if(i == 10){
            break;
        }
    }

    delete[] ids; //deleting the whole array

    return 0;