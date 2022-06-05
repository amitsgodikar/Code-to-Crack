/*
    Occurence of a number in an array
    
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
int brute(int A[], int n)
{
    int start = 0;
    int end = n - 1;

    int mid = (start+end)/2;

    while(start < end)
    {
        if(A[mid] > A[0])
            start = mid + 1;
        else
            end = mid;

        mid = (start+end)/2;

    }

    cout<<"Pivot element "<<A[mid]<<endl;

    return mid;
    
}

int Occurence(int A[], int n, int k)
{
    int pivot = brute(A, n);

    if((A[pivot] <= k) && (k <= A[n-1]))
    {
        int start = pivot;
        int end = n - 1;
        
        int mid = (start+end)/2;
        while(start <= end)
        {
            if(A[mid] == k)
                return mid;
            else if(A[mid] < k)
            {
                start = mid + 1;
            }
            else
                end = mid - 1;

            mid = (start+end)/2; 
        } 


    }

    else if((A[pivot - 1] >= k) && (k >= A[0]))
    {
        int start = 0;
        int end = pivot - 1 ;
        
        int mid = (start+end)/2;
        while(start <= end)
        {
            if(A[mid] == k)
                return mid;
            else if(A[mid] < k)
            {
                start = mid + 1;
            }
            else
                end = mid - 1;

            mid = (start+end)/2; 
        } 

    
    }

    return -1;


}


int main()
{
    int n, k;
    cin>>n>>k;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    cout<<"Original Array: ";

    printarr( A, n);

    int index = Occurence(A, n, k);
    cout<<"Index "<<index;
    
    

    return 0;
}