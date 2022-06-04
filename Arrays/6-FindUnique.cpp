/*
    A array of size N is given where N is odd
    Find unique element from the array
*/

#include<bits/stdc++.h>
using namespace std;


void printarr(int A[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cin>>size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Original Array ";
    printarr(arr, size);

    int unique = arr[0];

    for(int i = 1; i < size; i++)
    {
        unique = unique^arr[i];
    }

    cout<<"Unique element is "<<unique<<endl;

    return 0;
}