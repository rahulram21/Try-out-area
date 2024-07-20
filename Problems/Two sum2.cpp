#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec = {2,7,11,15};
    int target = 9;
    int endIndex = vec.size()-1;

    if(target < endIndex){
        for(int i=vec.size()-1; i>0; i--){
            if(target > vec[i]){
                endIndex = i+1;
            }
        }
    };



    
}