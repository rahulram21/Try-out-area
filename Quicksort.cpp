#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec = {10, 80, 30, 90, 40, 50, 70};
    int pivot = vec[vec.size()-1];// pivot = 70;
    
    int min = vec[0];
    int max = pivot;
    for(int i=0; i<vec.size(); i++){
        
        if(vec[i] < pivot){
            swap(min, vec[i]);
        }
        else if(vec[i] > pivot && vec[i]>vec[i+1]){
            min = vec[i];
        }
    }

    return 0;
}