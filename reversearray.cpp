#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n) {
    int s = 0;
    int e = n-1;

    while(s<e) {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
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
    reverse(arr,n);
    print(arr,n);

    return 0;
}