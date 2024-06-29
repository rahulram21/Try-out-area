#include <iostream>
using namespace std;

int main(){
    string s1 = "abc";
    string s2 = "ahbgdc";

    int j=0;

    for(int i=0; i<s2.length(); i++){
        if(j<s1.length() && s2[i] == s1[j]){
            j++;
        }
    };
    
    if(j == s1.length()){
        cout<<"Match"<<endl;
    }else{
        cout<<"Not match";
    }
}