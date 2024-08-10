#include <iostream>

using namespace std;

class Person{
public:
    int sum;
    Person(int a, int b){
        sum = a+b;
    }
};

int main(){
    Person obj(1,3);
    cout<<"The sum "<<obj.sum;
}