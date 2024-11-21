#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

/*
double divide(double a, double b){
    if (b==0.0) throw runtime_error("Divide by zero");
    
    return a / b;
}


template <typename T, typename U>

class Foo {
    private:
    T bar;
    U data;

    public:
    T get_bar(){
        return bar;
    }

    U get_data{
        
    }
}; */


template<typename T>
int find_index(vector<T> data, T value){
 for(int i = 0; i < data.size(), i++){
    if(data[i] == value) return i;
 }

 throw runtime_error("Not found");
}


int main() {

    Foo<int, double> f; //modifies the class to make the typename all int
    Foo<double, int> d; //creates another datatype but changes to double

    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try{
        cout << "Result: " << divide(a, b) << endl;
    }catch(runtime_error& err){
        cerr << err.what();
    }catch(...){ 
        //select catch all 
        cerr << "an error has happened."
    }
    

    return 0;
}