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


void swap(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
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

    for(int i = 0; i < size - 1; i++)
    {
        swap(arr[i], arr[i+1]);
        i++;
    }

    cout<<"Modified Array ";
    printarr(arr, size);

    

    return 0;
}
