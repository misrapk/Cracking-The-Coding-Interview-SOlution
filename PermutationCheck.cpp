//given two strings , check if one is permutation of other

#include<bits/stdc++.h>
using namespace std;
#define NO_CHARS 256

bool isPermutation(string s1, string s2){
    if(s1.length() != s2.length()) return false;

    int c1[NO_CHARS] ={0};
    int c2[NO_CHARS] = {0};

    for(int i =0; s1[i] && s2[i]; i++){
        c1[s1[i]]++;
        c2[s2[i]]++;
    }

    for(int i =0; i<NO_CHARS; i++){
        if(c1[i] != c2[i]) return false;
    }
    return true;


}


int main(){
    string s1, s2;
    cout<<"string: ";
    cin>>s1>>s2;

    if(isPermutation(s1, s2)) cout<<"YES\n";

    else cout<<"NO\n";
    return 0;
}
