#include <iostream>
using namespace std;

class Animal{
public:
    string species;
    void displaySpecies(){
        cout<<"Species name "<<species<<endl;
    }

};

//compile time function overriding here. For that, we don't need any extra keyword or something.
class Mammal:public Animal{
public:
    void displaySpecies(){
        cout<<"Species name from child class "<<species<<endl;
    }
};

int main(){
    Animal ani1;
    ani1.species = "Fellus";
    ani1.displaySpecies();
    Mammal mm1;
    mm1.species = "Domesticus";
    mm1.displaySpecies();
}
