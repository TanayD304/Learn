#include<bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int n) {
    int maxE = arr[0];
    for(int i=1;i<n;i++) maxE = max(maxE, arr[i]);

    return maxE;
}

int minElement(int arr[], int n) {
    int minE = arr[0];
    for(int i=1;i<n;i++) minE = min(minE,arr[i]);

    return minE;
}

int main() {

    // int arr[7] = {1,4,2,5,3,6,7};

    int size;
    cin>>size;

    int arr[1000];
    for(int i=0;i<size;i++) cin>>arr[i];

    cout<<maxElement(arr,size)<<endl;
    cout<<minElement(arr,size)<<endl;
    return 0;
}