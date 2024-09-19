#include <iostream>
#include <string> //generate string to give the actual name rather than the enum

using namespace std;

enum DayOfWeek {
    sun, mon, tue, wed, thu, fri, sat
};


string get_day_name(DayOfWeek day){
    switch(day){       //multiple if else statments, but it as to be a precise value and its only one per value
        case DayOfWeek::sun: return "Sunday";
        case DayOfWeek::mon: return "Monday";
        case DayOfWeek::tue: return "Tuesday";
        case DayOfWeek::wed: return "Wednesday";
        case DayOfWeek::thu: return "Thursday";
        case DayOfWeek::fri: return "Friday";
        defualt: return "Saturday";
    }
}

struct Marker {
    string color;
    string size;
    string brand;
    bool lid;
    double price;
};


string display_marker(const Marker& m){ 
    m.price = .98;
    return m.brand + "(" + m.color  + ")"; // pluses are for contatinating, must have return 

} 

// & is used when passing a "redM" object, you are passing the object information. downside: people can edit and change the info of it. 
// must use const to never make change.

int main(){
    DayOfWeek today = DayOfWeek::thu;
    Marker redM{"red", "medium", "Expo", true, .5};
    Marker greenM{"green", "small", "Expo", true, .9};
    Marker blueM{"blue", "small", "Sharpy", true, .5};
    Marker blackM{"black", "medium", "Expo", true, .9}; 
    //make distinction between assignment and initialization, that is why we do not use "=". Use int n {10};

    cout << "today is" << get_day_name(today) << endl;

    cout << "My Marker " << display_marker(redM) << endl;

    int count{10};
    int& n_students = count; // when referencing names

    cout << count << endl;

    n_students = 12;

    cout << count << endl; // this is an alius (?)

    return 0;
}

enum class BillKind {
    one, five, ten, twenty, fifty, hundred
};

struct Bill {
    int count;
    short value;
    BillKind kind;
};

Bill two_hundred = {10, 20, BillKind::twenty};


