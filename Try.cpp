#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> cit = {1,3,1};
    int hIndex=cit[0];
    for(int i=0; i<cit.size(); i++){
        if(cit[i]>hIndex && cit[i] < cit.size()){
            hIndex = cit[i];
        }else{
            while(hIndex > 0){
                
            }
        }
    }
    cout<<"H index = "<<hIndex;
}