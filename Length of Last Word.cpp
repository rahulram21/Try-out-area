#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> strs;
    string str = "hello I am robot ";
    int key1 = 0, key2 = 0;
    // for(int i=0; i<str.length(); i++){
    //     if(str[i] != ' ' && key1 ==0){
    //         key1 = i; //1
    //     }
    //     if(str[i+1] == ' ' && key1 != 0){
    //         key2 = i; //5
    //         string st = str.substr(key1, key2); //substr(1, 5);
    //         strs.push_back(st);
    //         key1=0;
    //     }
    // }
    for(int i=0; i<str.length(); i++){
        
    }
    cout<<str.find(' ');
}