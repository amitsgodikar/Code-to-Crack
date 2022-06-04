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

void pairsum(int A[], int n, int k)
{
    int count = 0;
    int pair[2*n];

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++ )
        {
            if(A[i]+A[j] == k)
            {
                pair[count] = A[i];
                count++;
                pair[count] = A[j];
                count++;
                
            }
        }
    }

    cout<<"Pairs are ";
    sort(pair, pair + count);
    printarr(pair, count);
}


int main()
{
    int n, key;
    cin>>n>>key;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    cout<<"Original Array ";

    printarr(arr, n);

    pairsum(arr, n, key);

    

    return 0;
}