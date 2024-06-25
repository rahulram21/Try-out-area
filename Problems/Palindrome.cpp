#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(string s) {
    // remove non alphabets from s.
    // isalpha (<cctype>) returns true if char c is alphabet
    // remove_if(<algorithm>) iterates from begin() to end() and moves the characters which are true (Returned by the lambda function) to the
    // end of the string. It returns the index from where the characters which returned true starts.
    // erase() erases from index returned by remove_if to the end of the string.
    s.erase(remove_if(s.begin(), s.end(), [](unsigned char c){
        return !isalnum(c);
    }), s.end());

    std::transform(s.begin(), s.end(), s.begin(), ::tolower);

    bool returnFlag = true;

    for(int i=0, j=s.length()-1; i < j; i++, j--){
        if(s[i] != s[j]){
            returnFlag = false;
            break;
        }
    }
    return returnFlag;
};

int main(){
    string s = "A man, a plan, a canal: Panama";
    cout<<boolalpha<<isPalindrome(s);
    
}