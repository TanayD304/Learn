#include<bits/stdc++.h>
using namespace std;

// arrays passed as an argument are actually the address or memory reference so any change in the array inside the function will affect the array of main function as well

void print(int arr[], int n) {
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void update(int arr[], int n) {
    arr[0]=-1;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    print(arr,5);
    update(arr,5);
    print(arr,5);

    return 0;
}