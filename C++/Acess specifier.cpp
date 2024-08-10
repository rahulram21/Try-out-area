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
    friend class Dogs;
};

class Dogs{
public:
    string dogname;
    void display(Person t){
        dogname = t.name;
        cout<<"The animal name "<<dogname;
    }
};


int main(){
    Person p;
    p.setName("Alice");
    Dogs dog;
    dog.display(p);
}

