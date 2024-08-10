#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        void calculateAge();
    public:
        string getName(){
            string name1 = name;
            return name1;
        }
        void setName(string n){
            name = n;
        }
        void publicCalculateAge(){
            calculateAge();
        }
};

void Student::calculateAge(){
    cout<<"Hello "<<name;
}
// We can define public and private methods using scope operator

int main(){
    Student stu1;
    stu1.setName("Harry");
    stu1.publicCalculateAge();
}