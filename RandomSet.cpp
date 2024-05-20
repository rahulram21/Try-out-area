#include <iostream>
#include <set>
#include <random>

using namespace std;

class RandomizedSet {
public:
    std::set<int> newSet;
    RandomizedSet() {
        newSet = {};
    }
    
    bool insert(int val) {
        auto it = newSet.find(val);
        if(it != newSet.end()){
            newSet.insert(val);
            return true;
        }else{
            return false;
        }
        
    }
    
    bool remove(int val) {
        for(auto &elem:newSet){
            if(elem == val){
                newSet.erase(val);
                return false;
            }else{
                newSet.insert(val);
                return true;
            }
        }
    }
    
    int getRandom() {
        //random number generation
        int len = newSet.size();
        random_device rd;
        mt19937 gen(rd());
        uniform_real_distribution<> dis(0, len); 
        int rand = dis(gen);
        set<int>:: iterator it = newSet.begin();
        advance(it, rand);
        return *it;

    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

int main(){
    RandomizedSet random1;
    cout<<boolalpha<<random1.insert(2);

}