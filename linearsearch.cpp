#include<bits/stdc++.h>
using namespace std;

int linear(int arr[], int n, int k) {
    for(int i=0;i<n;i++) {
        if(arr[i]==k) return i;
    }

    return -1;
}

int main() {
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cin>>k;

    cout<<linear(arr,n,k)<<endl;
    return 0;
}