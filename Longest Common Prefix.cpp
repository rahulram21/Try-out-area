// Algorithm : take two integers which are used to form substring from the first element in the string array. We make an initial
// Substring with first two characters of this string. Then we will iterate through the rest of the elements to check if the 
// new substring is available in there using find() method. 
// If it's there, we will increment the last_subIndex. If not, we will increment the first_subIndex and make a new substring

#include <iostream>
#include <vector>

using namespace std;

int main(){
    string strs[3] = {"dog","racecar","car"};

    string prefix = strs[0]; //flower

    for(int i=1; i<3; i++){
        int minLength = min(prefix.length(), strs[i].length());
        for(int j=0; j < minLength; j++){
            if(prefix[j] != strs[i][j]){             
                prefix = prefix.substr(0, j);
            }
        } 
    }

    cout<<prefix<<endl;
    
    
}

// found solution but has heap overflow error in leetcode

//Another algorithm
// find the smallest string. Compare the characters in this string with other strings.
// Trim out the characters which are not in the smallest string.
// Determine which is the smallest string.
// Follow step 1-3
// Exit once all strings are equal.
// {"flower","flow","flight"} -> {"flow","flow","fl"} -> {"fl","fl","fl"}