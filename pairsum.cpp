#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> res;
    vector<int> temp = {0,0};
   for(int i=0;i<arr.size();i++) {
       for(int j=i+1;j<arr.size();j++) {
           if(arr[i]+arr[j]==s) {
               temp[0] = min(arr[i],arr[j]);
               temp[1] = max(arr[i],arr[j]);
               res.push_back(temp);
           }
       }
   }
    sort(res.begin(), res.end());

    return res;
}

int main() {
    int n;
    cin>>n;

    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];

    int k;
    cin>>k;

    vector<vector<int>> res = pairSum(arr,k);

    for(int i=0;i<res.size();i++) {
        for(int j = 0;j<res[i].size();j++) cout<<res[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}