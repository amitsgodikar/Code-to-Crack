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
    Approach 1 :
*/

void duplicate(int A[], int n)
{
    cout<<"Duplicate 0 function is working"<<endl;
    sort(A, A + n);
    int flag = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(A[i]-A[i+1] == 0)
        {
            cout<<"Duplicate element is "<<A[i]<<endl;
            flag = 1;
        }
     
    }

    if(flag == 0)
        cout<<"Duplicate element not found "<<endl;
}
/*
    Approach 2 : XOR ing array elements then again XOR ing till n - 1
*/

void duplicate1(int A[], int n)
{

    int ans = A[0];

    for(int i = 1; i < n; i++)
    {
        ans = ans ^ A[i];
    }

    for(int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }

    cout<<"Duplicate 1 function is working"<<endl;
    cout<<"Duplicate element is "<<ans<<endl;

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

    duplicate1(arr, size);
    


    

    return 0;
}