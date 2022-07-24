#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // declaration
    // int arr[10]; // contains garbage vals

    // indexing and accessing
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;

    // index goes from 0 to n-1 where size of array is n

    // initialisation
    // int num[3] = {5,7,11};
    // int num[5] = {5, 7, 11}; // after the 0,1 and 2 index rest all the values become 0
    // int num2[5] = {0}; // all values will be 0
    // int num3[5] = {1}; // only num3[0] = 1 and rest all will be 0
    // int nums4[5];
    // fill_n(nums4,4,1); // all values will be 1

    // we cannot have the array index out of the size

    // cout<<num[0]<<endl;
    // cout<<num[1]<<endl;
    // cout<<num[2]<<endl;
    // cout<<num[3]<<endl; // not valid

    // for(int i=0;i<5;i++) {
    //     cout<<num[i]<<endl;
    // }

    // print(num,5);

    // int size = sizeof(num) / sizeof(num[0]);
    // print(num, 5);


    // array can be made of any data type
    char a[2] = {'a','b'};
    bool b[2];
    double c[2];

    return 0;
}