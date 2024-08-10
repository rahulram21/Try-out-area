#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        void calculateAge(){
            cout<<"hello "<<name;
        }
};

int main(){
    Student stu1;
    stu1.name = "Rahul";
    stu1.age = 26;
    stu1.calculateAge();
}