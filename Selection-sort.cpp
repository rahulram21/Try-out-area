#include <iostream>

using namespace std;


int main(){
    int arr[5] = {64, 25, 12, 22, 11};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<len-1; i++){
        int low_index=i;
        int j;
        for(j=i+1; j<len; j++){
            
            if(arr[j] < arr[low_index]){
                low_index=j;
            }
        }
        if(low_index != i)
        swap(arr[low_index], arr[i]);
    }

    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
}