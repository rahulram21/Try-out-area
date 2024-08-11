#include <iostream>
using namespace std;

class Cars{
    public:
    int tires;
    string make;
    int sumOfTires(int tires){
        this->tires = tires;
        return tires+1;
        // this pointer points the member function to the current instance of the class
    }
    
    //this pointer also enables function chaining by pointing to the current object
    Cars setTire(int tires){
        this->tires = tires;
        return *this;
    }
    Cars setMake(string make){
        this->make = make;
        return *this;
    }

};

int main(){
    Cars car1;
    Cars car2;
    car1.setMake("honda").setTire(4);
    cout<<"Make : "<<car1.make<<", Tires : "<<car1.tires<<endl;

}