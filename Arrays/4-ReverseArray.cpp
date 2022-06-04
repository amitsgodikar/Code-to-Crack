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


/*
    Approach 1 : Pinting the elements from back side
*/

void reversearr(int A[], int n)
{
    for(int i = n - 1; i >= 0; i-- )
    {
        cout<<A[i]<<" ";
    }

    cout<<"Printed by traversing from backside"<<endl;
}


/*
    Approach 2 : Using two pointers
*/

void reversearr1(int A[], int n)
{
    int p = 0;
    int q = n-1;

    while(p<q)
    {
        int temp = A[p];
        A[p] = A[q];
        A[q] = temp;
        p++;
        q--;
    }

    cout<<"Printed using reverse1 function"<<endl;

    printarr(A, n);
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

    reversearr1(arr, size);

    

    return 0;
}