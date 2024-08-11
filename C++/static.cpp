#include <iostream>
using namespace std;

class Person{
public:
    static int x;
    Person(){
        x++;
        cout<<"The count is "<<x<<endl;
    }
};

int Person::x = 0;
// static variable is initialized outside class as per rule

int main(){
    Person p1;
    Person p2;
    Person p3;
}