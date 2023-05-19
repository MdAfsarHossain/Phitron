#include<iostream>
using namespace std;

int part(int ara[], int start, int end)
{
    int pIndex = start;
    int pivot = ara[end];

    for(int i=start; i<end; i++)
    {
        if(ara[i] < pivot)
        {
            swap(ara[i], ara[pIndex]);
            pIndex++;
        }
    }
    swap(ara[end], ara[pIndex]);
    return pIndex;
}

void quickSort(int ara[], int start, int end)
{
    if(start < end)
    {
        int pIndex = part(ara, start, end);
        quickSort(ara, start, pIndex-1);
        quickSort(ara, pIndex+1, end);
    }
}

int main()
{
    int n;
    cin>>n;

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }

    quickSort(ara, 0, n-1);

    for(int i=n-1; i>=0; i--)
    {
        cout<<ara[i]<<" ";
    }

    return 0;
}

/**
5
6 2 3 3 5

6
5 6 7 8 0 1
**/
