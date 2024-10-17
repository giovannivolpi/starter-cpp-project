#include <iostream>
#include <iomanip>
#include <string>


class Account {
    private:
      int id;
      double balance;
      std::string type;
      double rate;
    
    public:
      //constructor 
      Account(int id): id(id), balance(0.0), type("checking"), rate(0.0001){} //create a default account (special case)
      Account(int id, double b, std::string t, double r): id(id), balance(b), type(t), rate(r){} //initializer list

    int getId(){return id;} // a getter, or accessor, one individual (or more) parts
    void setId(int id) { this->id = id; } //object being changed with pointer (also called a setter). Use this for same name

    double getBalance(){return balance;} 
    void setBalance(int b) { this->balance = b; } 

    const std::string& getType() const {return type;} 
    void setType(const std::string& type) { this->type = type; } //using const in order to not change the original value, first const = return can't be changed. Second function can't change object

    double getRate() {return rate;} 
    void setRate(double r) { this->rate = rate; } 


    void show(){
        std::cout << std::setw(10) << "ID: " << id << std::endl
                  << std::setw(10) << "BALANCE: " << balance << std::endl
                  << std::setw(10) << "TYPE: " << type << std::endl
                  << std::setw(10) << "RATE: " << rate << std::endl;
    }
      
};

int main(){
    Account a{123, 100.0, "Checking", 0.005};
    Account b{234};

    Account* c = new Account(173, 100.0, "Checking", 0.005);
    Account* d = new Account(230);

    a.show();
    b.show();
    c->show(); //it's a pointer
    d->show(); //it's a pointer

    delete c, d; // delete the info for leaks

    return 0;
}