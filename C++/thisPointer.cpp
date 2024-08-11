#include <iostream>
using namespace std;

class Cars{
    public:
    int tires;
    int sumOfTires(int tires){
        this->tires = tires;
        return tires+1;
        // this pointer points the member function to the current instance of the class
    }

};

int main(){
    Cars car1;
    Cars car2;
    cout<<car1.sumOfTires(4);
}