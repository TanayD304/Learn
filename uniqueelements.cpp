#include <bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++) ans = ans ^ arr[i];
    return ans;
}

int main() {
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<findUnique(arr,n);
    return 0;
}