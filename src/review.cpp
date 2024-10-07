//week 2 

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

unsigned int n = 7;
unsigned long factorial = 1;


do{
    factorial *= n;
    n--;
}while(n >= 1);