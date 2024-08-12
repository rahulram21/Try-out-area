#include <iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;
    public:
    Complex(int r=0, int i=0){
        real = r;
        img = i;
    }

    Complex operator+(Complex obj){
        Complex res;
        res.real = real + obj.real;
        res.img = img+ obj.img;
        return res;
    }
    void print(Complex obj){
        cout<<obj.real<<" + i"<<obj.img<<endl;
    }
};

int main(){
    Complex c1(2,3);
    Complex c2(5,6);
    Complex c3 = c1+c2;
    c3.print(c3);
}