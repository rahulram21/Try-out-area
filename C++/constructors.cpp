#include <iostream>

using namespace std;

class Person{
public:
    string name;
    int age;
    Person(string a, int b){
        name = a;
        age = b;
    }
};

int main(){
    Person obj("Rahul", 26);
    cout<<"Name of person "<<obj.name<<endl;
    cout<<"Age of person "<<obj.age<<endl;
}