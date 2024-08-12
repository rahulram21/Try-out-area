#include <iostream>
using namespace std;

class Animal{
    public:
    int a;
    void print(){
        cout<<"The value of a "<<a<<endl;
    }
    void print(int b, string c){
        cout<<"The value of a + b is "<<a+b<<endl; 
        cout<<"The string c is "<<c<<endl;
    }
};

int main(){
    Animal tiger;
    tiger.a = 4;
    tiger.print();
    tiger.print(4, "I'm a mammal");
}