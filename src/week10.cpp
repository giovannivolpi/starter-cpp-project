#include<iostream>
#include<vector>
using namespace std;

void operator+(vector<int>& a, int b){ //sytax for the main()
    a.push_back(b);
}

void operator<<(vector<int>& a, int b){ //sytax for main()
    for(int i = 0; i < b; i++){
        a.pop_back(); //removes the last 3 elements from the end of vector list
    }
}

ostream& operator<<(ostream& out, vector<int> v){ //overloading using the << to this function
    for(int e : v){
        out << e << " ";
    }

    return out;
}

class C {
    private: 
        double number = 4.5;
        char type = 'P';

    public:
        C& operator+(int b){
            number += b;
            return *this; //this is referencing self (thus a), whatever object it is working on
        }

         C& operator-(int b){
            number -= b;
            return *this; //this is referencing self (thus a), whatever object it is working on
        }

        C& operator++(){
            number += 1;
            return *this; //this is referencing self (thus a), whatever object it is working on
        }

        bool operator==(int b){
            return number == b; //because it is a boolean
        }

        friend ostream& operator<<(ostream& out, const C& c){ // can only have this in the class, number is private, and using friend can give access to the number // can only read, access, but cannot change because of asking the user for a number
            char trash;
            out << c.type << trash << c.number;
            return out;
        }

        friend istream& operator>>(istream& in, C& c){ 
            char trash; //this is to grab the ":" when user types the point in the input

            cin >> c.type >> trash >> c.number; 


            return in;
        }

        int operator[](int index){
            if(index == 0){
                return type;
            }else{
                return number;
            }
        }



};

int main(){
    vector <int> v{12, 3, 6, 19, 20, 17};


    v + 10; //intention is to push 10 at the back of the vector list = operator+(v + 10)
    cout << v;
    v << 3; //intention is to pop the last 3 elements of the vector 
    cout << v << endl;

    C a;

    cout << "enter a C object (example P: 10): ";
    cin >> a;

    a + 3 + 6 + 9;
    cout << a << endl; //operator(cout, a)
    a - 6;
    cout << a << endl;

    ++a; //a.operator++
    cout << a << endl;

    a == 15; //a.operator == 15
    cout << a << endl;

    cout << static_cast<char>(a[0]) << " - " << a[1] << endl; //static_cast converts integer to cast

    return 0;
}