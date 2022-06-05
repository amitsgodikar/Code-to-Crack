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
void brute(int A[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end)/2;

    while(start < end)
    {
        

        if(A[mid] < A[mid+1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = (start + end)/2;
        

    }

    cout<<"Peak of mountain is "<<A[start]<<endl;
    
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    cout<<"Original Array: ";

    printarr( A, n);

    brute(A, n);
    
    

    return 0;
}