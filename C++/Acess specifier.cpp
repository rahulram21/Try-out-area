#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        void printName(string n){
            name = n;
            cout<<"The name is "<<name;
        }
};

class Asian:public Person{
    public:
        
        void printName(string name1){
            name = name1;
            cout<<"Name from child class is "<<name;
        }
};


int main(){

    Asian obj1;
    obj1.printName("Harry");
}

