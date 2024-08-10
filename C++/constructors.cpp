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

int main(){
    Person obj("Rahul", 26);
    cout<<"Name of person "<<obj.name<<endl;
    cout<<"Age of person "<<obj.age<<endl;
}