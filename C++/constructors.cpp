#include <iostream>

using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
        // How to initilize the variables if the parameters have same name as variables? Using 'this'?
        // answer : Yes using this as shown above
    }
};

//copy constructor
class Animal{
public:
    bool isMammal;
    string species;
    Animal(string name){
        species = name;
    }
    //copy constructor
    Animal(Animal &obj){
        species = obj.species;
    }
    //Destructor
    ~Animal(){
        cout<<"Object destructed"<<endl;
    }
    
};

int main(){
    Person obj("Rahul", 26);
    cout<<"Name of person "<<obj.name<<endl;
    cout<<"Age of person "<<obj.age<<endl;

    //copy constructor invoking
    Animal anim1("Tiger");
    Animal anim2(anim1);
    cout<<"Anim2 name "<<anim2.species<<endl;
}