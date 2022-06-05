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


void brute(int A[], int n, int k)
{
    int first = -1;
    int i = 0;
    while(i < n)
    {
        if(A[i] == k)
        {
            first = i;
            break;
        }
        else
            i++;
    }

    int last = -1;
    int j = n - 1;
    while(j >= 0)
    {
        if(A[j] == k)
        {
            last = j;
            break;
        }
        else
            j--;
    }

    cout<<"First Occurrence "<<first<<endl;
    cout<<"Second Occurrence "<<last<<endl;
}

/*
    Approach 2: Apply Binary search individually for first and last occurrence 
    Two while loops
*/
void optimal()
{

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

    brute(A, n, k);
    
    

    return 0;
}