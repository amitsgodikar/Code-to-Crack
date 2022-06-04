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


void arrintersection(int A[], int m, int B[], int n)
{
    int p = 0;
    int q = 0;

    int arrinter[m];

    int count = 0;
    while(p < m && q < n)
    {
        if(A[p] == B[q])
        {
            arrinter[count] = A[p];
            count++;
            p++;
            q++;

        }

        else if(A[p] < B[q])
        {
            p++;
        }

        else
        {
            q++;
        }
    }

    cout<<"Common elements are "<<endl;
    printarr(arrinter, count);

}






int main()
{
    int m, n;
    cin>>m>>n;

    int arr[m];
    int brr[n];

    for(int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        cin>>brr[i];
    }

    cout<<"First Array ";

    printarr(arr, m);

    cout<<"Second Array ";

    printarr(brr, n);

    arrintersection(arr, m, brr, n);

    

    return 0;
}