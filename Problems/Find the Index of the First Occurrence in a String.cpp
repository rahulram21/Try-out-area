#include <iostream>
#include <vector>

using namespace std;

int main(){
    string haystack = "leetcode";
    string needle = "leeto";

    int pos=-1;
    for(int i=0; i<haystack.length(); i++){
        if(haystack[i] == needle[0]){
            string sub = haystack.substr(i, needle.length());
            if(sub == needle){
                pos=i;
                break;
            }
        }
    }
    cout<<"The position: "<<pos;

}