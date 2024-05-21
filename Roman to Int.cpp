#include <iostream>
#include <string>
#include <map>

using namespace std;

int roman(string s){ //MCMXCIV - 1994  
    int num = 0;
    map<char, int> mp;
    mp = {{'I',1}, {'V',5}, {'X',10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    for(int i=0; i<s.length(); i++){
        if(mp[s[i]] < mp[s[i+1]]){
            num = num-mp[s[i]];
        }else{
            num += mp[s[i]]; //104+
        }
    }
    return num;
}
int main(){
   string s = "LVIII";
   cout<<roman(s);
}

// Problem solved