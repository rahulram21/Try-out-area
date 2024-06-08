// Algorithm : take two integers which are used to form substring from the first element in the string array. We make an initial
// Substring with first two characters of this string. Then we will iterate through the rest of the elements to check if the 
// new substring is available in there using find() method. 
// If it's there, we will increment the last_subIndex. If not, we will increment the first_subIndex and make a new substring

#include <iostream>
#include <vector>

using namespace std;

int main(){
    string strs[3] = {"flower","flow","flight"};
    int first_subIndex = 0;
    int last_subIndex = 2;
    string prefix = strs[0].substr(first_subIndex, last_subIndex);
    vector<string> prefixes;
    bool available = false;
    while(last_subIndex != strs[0].length()-1){
        for(int i=1; i<3; i++){
            if(strs[i].find(prefix)){
                available = true;
            }else{
                first_subIndex++;
            }
            if(i==2 && strs[i].find(prefix)){
                prefixes.push_back(prefix);
                last_subIndex++;
            }
        }
    }
    for(const auto& val: prefixes){
        cout<<val<<endl;
    }
}