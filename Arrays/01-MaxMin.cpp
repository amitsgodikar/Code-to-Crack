/*
    Find maximum and minimum element in the array
*/


#include<bits/stdc++.h>
using namespace std;


void printarr(int A[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
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


    int maxn = arr[0];
    int minn = arr[0];

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > maxn)
            maxn = arr[i];
        if(arr[i] < minn)
            minn = arr[i];
    }

    cout<<endl;
    cout<<"Max Element"<<" "<<maxn<<endl;
    cout<<"Min Element"<<" "<<minn<<endl;

    return 0;
}
