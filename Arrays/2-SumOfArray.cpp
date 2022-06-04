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

    printarr(arr, size);

    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    cout<<"Sum of array is "<<sum<<endl;

    return 0;
}