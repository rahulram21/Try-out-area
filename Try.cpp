#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
//maximum value of h such that the given researcher has published at least h papers that have each been cited at least h times.

int main(){
    vector<int> cit = {0};    //1  ,,,  3,0,6,1,5   0,1,3,5,6  1,1,3
    int hIndex = cit.size();

    sort(cit.begin(), cit.end());
    for(int i=0; i<cit.size(); i++){
        if(cit[i] < hIndex){
            hIndex--;
        }
    }
    cout<<"H index = "<<hIndex;
}