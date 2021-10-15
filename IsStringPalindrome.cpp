#include<bits/stdc++.h>
using namespace std;

// simple function which will check starting and ending one by one
bool isStringPalindrome(string s){

    int st = 0;
    int en = s.length() - 1;

    while(st < en){
        if(s[st] != s[en]){
            return false;
        }
        st++;
        en--;
    }

    return true;
}

// recursive function to check if palindrome or not
bool isStringPalindromeRecur(string s, int st, int en){
    if(st==en){
        return true;
    }

    if(s[st] != s[en]){
        return false;
    }

    if(st < en){
        return isStringPalindromeRecur(s, st+1, en-1);
    }

    return true;
}


int main(){
    cout<<"Enter string:\n";
    string s;

    cin>>s;

    // cout<<isStringPalindrome(s)<<"\n";

    int n = s.length();

    if(n==0){
        cout<<true<<'\n';
    } else{
        cout<<isStringPalindromeRecur(s, 0, n-1)<<'\n';
    }

    return 0;
}