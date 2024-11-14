#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){

    ifstream json ("movie.json");
    string name1, year1, name2, year2, trash;

    json >> trash >> trash >> trash >> name1 >> trash >> year1;
    json >> trash >> trash >> trash >> name2 >> trash >> year2;
    cout << name1 << year1 << name2 << year2 << endl;

    ofstream csv("movie.csv");
    csv << setw(15) << "Name," << setw(10) << "Year" << endl;
    csv << setw(15) << name1 << setw(10) << year1 << endl;
    csv << setw(15) << name2 << setw(10) << year2 << endl;

    csv.close();
    json.close();

    return 0;
}