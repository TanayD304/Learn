#include<bits/stdc++.h>
using namespace std;

void swapalternate(int arr[], int n) {
    for(int i=0;i<n-1;i+=2) swap(arr[i],arr[i+1]);
}

void print(int arr[], int n) {
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];

    print(arr,n);
    swapalternate(arr,n);
    print(arr,n);


    return 0;
}