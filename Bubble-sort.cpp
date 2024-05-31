#include <iostream>

using namespace std;

int main(){
    int arr[6] = {13, 8, 9, 3, 5, 11};
    int len = sizeof(arr)/sizeof(arr[0]);
    bool swapped = false ;
    
    for(int j=0; j < len-1; j++){
        swapped = false;
        for(int i=0; i < len-j-1; i++){
            if(arr[i+1] < arr[i]){
                swap(arr[i], arr[i+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }

    for(auto const& val:arr){
        cout<<val<<" ";
    }
}