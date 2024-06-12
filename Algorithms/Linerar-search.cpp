#include <iostream>

using namespace std;

int main(){
    int arr[5] = {3, 1, 6, 8, 5};
    int key = 8;
    int result = -1;
    for(int i=0; i<5; i++){
        if(arr[i] == key){
            result = i;
        }
    }

    if(result != -1){
        cout<<"The key is at the index : "<<result<<endl;
    }else{
        cout<<"Key is not in the array "<<result<<endl;
    }
}