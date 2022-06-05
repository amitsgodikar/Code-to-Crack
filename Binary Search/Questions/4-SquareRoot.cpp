/*
   Square root of a number 
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
int brute(int k)
{
    int start = 1;
    int end = k/2;

    int mid = (start+end)/2;
    while(start <= end)
    {
        if((mid*mid) == k)
            return mid;

		else if((mid*mid) < k && (mid+1)*(mid+1) > k)
			return mid;

        else if((mid*mid) < k)
        {
            start = mid + 1;
        }
        else if((mid*mid) > k)
        {
            end = mid - 1;
        }

        mid = (start+end)/2;

    }

    return -1;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int k;
    cin>>k;

    int index = brute(k);
    cout<<"Index "<<index<<endl;
    }
    
    

    return 0;
}