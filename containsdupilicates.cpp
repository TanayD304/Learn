#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int ans = 0;
    for(int i=0;i<n;i++) ans = (ans^i^arr[i]);
    return ans;

}

int main() {
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<findDuplicate(arr,n)<<endl;


    return 0;
}