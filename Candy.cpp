#include <vector>

using namespace std;

int main(){
    vector<int> arr = {1, 0, 2}; //next: 1, 2, 2
    size_t len = arr.size();
    vector<int> candy;
    

    for(int i=1; i<len; i++){
        if(arr[i] > arr[i+1] || arr[i] > arr[i-1]){
            candy[i]++;
        }
    }
}