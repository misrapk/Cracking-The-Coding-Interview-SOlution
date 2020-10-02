/* Check if string has all unique characters */



#include<bits/stdc++.h>
using namespace std;

//TODO:comoplexity == O(n) ; space => O(1)

bool isUnique(string str){
    if(str.length() > 128) return false;
    //create array of boolean

    vector<bool> char_set(128);

//traverse and check that if the char at char_set is true or false...if it found then return false 
    for(int i =0; i<str.length(); i++){
        int val = str[i] - 'a';
        if(char_set[val]){
            return false;
        }
        char_set[val] = true;
    }
    return true;
}


int main(){
    string str = "bcdaf";

    if(isUnique(str) == true) cout<<"All unique"<<endl;
    else cout<<"Not Unique";

    return 0;
}
