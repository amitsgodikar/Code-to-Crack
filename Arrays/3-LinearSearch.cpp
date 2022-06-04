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

bool search(int A[], int n, int k)
{
    for(int i = 0; i < n; i++)
    {
        if(A[i] == k)
            return true;
    }

    return false;
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

    int key;
    cin>>key;

    printarr(arr, size);

    bool found = search(arr, size, key);

    if(found == true)
        cout<<"Key found"<<endl;
    else
        cout<<"Key not found"<<endl;

    return 0;
}