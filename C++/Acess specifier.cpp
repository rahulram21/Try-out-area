#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
    void setName(string n){
        name = n;
    }
        void printName(string n){
            name = n;
            cout<<"The name is "<<name;
        }
    friend void displayPersonName(Person p);
};

void displayPersonName(Person p){
    cout<<"Person name : "<<p.name;
}


int main(){
    Person p;
    p.setName("Alice");
    displayPersonName(p);
}

