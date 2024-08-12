#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void makeSound(){
        cout<<"Make any sound"<<endl;
    }
};

class Dog: public Animal{
    public:
    void makeSound() override{
        cout<<"Dog barks"<<endl;
    }
};

class Cat: public Animal{
    public:
    void makeSound() override{
        cout<<"Cat meows"<<endl;
    }
};



int main(){
    Animal* anim;
    Dog d1;
    anim = &d1;
    anim->makeSound();
}