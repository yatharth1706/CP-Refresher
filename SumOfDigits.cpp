#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int total = 0;
    int rem = 0;
    while(n!=0){
        rem = n%10;
        total += rem;
        n = n/10;
    }
    return total;
}

int main(){
    cout<<"Enter number:\n";
    int n;
    cin>>n;

    cout<<sumOfDigits(n)<<"\n";

    return 0;
}