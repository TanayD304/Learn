#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> res;

    int i = 0;
    int j = 0;

    while(i<n && j<m) {
        if(arr1[i]==arr2[j]) {
            res.push_back(arr1[i]);
            i++;
            j++;
        } else if(arr1[i]>arr2[j]) j++;
        else i++;
    }
    return res;
}

int main() {
    int n;
    cin>>n;

    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    int m;
    cin>>m;

    vector<int> arr1(m,0);
    for(int i=0;i<m;i++) cin>>arr1[i];

    vector<int> arr2 = findArrayIntersection(arr,n,arr1,m);

    for(int i=0;i<arr2.size();i++) cout<<arr2[i]<<" ";
    return 0;
}