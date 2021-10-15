#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArrayBySwap(vector<int> arr) {
    // run the loop till half of the array and then swap simple
    int sz = arr.size()/2;
    int n = arr.size();

    for(int i=0;i<sz;i++){
        swap(arr[i], arr[n-i-1]);
    }

    return arr;

}

vector<int>  reverseArrayUsingVectorMethod(vector<int> arr){
    reverse(arr.begin(), arr.end());
    return arr;
}

int main(){
    vector<int> arr;
    int n; int x;
    cout<<"Enter size of array:\n";
    cin>>n;

    cout<<"Enter elements of array:\n";

    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }

    // arr = reverseArrayBySwap(arr);
    arr = reverseArrayUsingVectorMethod(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    return 0;
}