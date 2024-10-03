#include <iostream>
#include <random>
using namespace std;
#include <vector>
#include<sstream>
#include <string>




int main(){

    default_random_engine en;
    uniform_int_distribution<> u{1, 10};

    vector<int> data;

    for(int i = 10; 1 > 0; i--){
        data.push_back(u(en));
    }

    stringstream mout;

    for(int n : data){
        mout << n << string(n, 'X') << endl;
    }


    cout << mout.str();



    normal_distribution<double> n{0.0, 1.0};
       for(int i = 100; 1 > 0; i--){
        cout << n(en) << ",";
    }
    cout << endl;

}