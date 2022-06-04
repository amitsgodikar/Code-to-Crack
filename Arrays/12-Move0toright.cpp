#include<iostream>
#include<vector>
using namespace std;


void printarr(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
}


/*
    Approach 1: TIme Complexity O(N^2)
                If arr[i] is zero and arr[i+1] is non zero element then swap the positions
*/
void movezeroes(vector<int> v)
{
    int n = v.size();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if((v[j] == 0) && (v[j+1] != 0))
            {
                swap(v[j], v[j+1]);
            }
        }
    }

    cout<<"After moving zeroes: ";
    printarr(v);
}

void movezeroes1(vector<int> v)
{
    int n = v.size();
    int k = 0; 
    for(int i = 0; i < n; i++)
    {

        if(v[i] != 0)
        {
            swap(v[i], v[k]);
            k++;
        }
    }

    cout<<"Optimal Method ";
    printarr(v);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int e;
    for(int i = 0; i < n; i++)
    {
        cin>>e;
        v.push_back(e);
    }

    cout<<"Original Array: ";

    printarr(v);

    //movezeroes(v);
    movezeroes1(v);

    return 0;


}