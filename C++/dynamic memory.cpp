#include <iostream>
using namespace std;

int main(){
    int x = 22;
    int *p;
    p=&x;
    // cout<<x<<endl; // 22
    // cout<<*p<<endl; //22
    // cout<<p<<endl; //address
    int *q = &x;
    int y = *q;
    cout<<y; // 22

    // dynamic memory allocation
    // dynamic char array
    int size = 5;
    char *ptr = new char[size];
    delete[] ptr;
}