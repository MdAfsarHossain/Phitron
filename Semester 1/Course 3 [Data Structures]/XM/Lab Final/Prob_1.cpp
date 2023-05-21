#include<bits/stdc++.h>
using namespace std;

void Merge(vector<string>&ara, int l, int m, int r)
{
    int n1, n2;
    n1 = m - l + 1;
    n2 = r - m;

    vector<string> leftArray(n1);
    vector<string> rightArray(n2);

    for(int i=0; i<n1; i++)
        leftArray[i] = ara[l+i];
    for(int i=0; i<n2; i++)
        rightArray[i] = ara[m+1+i];

    int i=0, j=0, k=l;

    while(i<n1 && j<n2)
    {
        if(leftArray[i] < rightArray[j])
        {
            ara[k] = leftArray[i];
            i++;
        }
        else
        {
            ara[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        ara[k] = leftArray[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        ara[k] = rightArray[j];
        j++;
        k++;
    }
}

void Merge_sort(vector<string>&ara, int l, int r)
{
    if(l>=r)
        return;

    int mid = l + (r - l)/2;

    Merge_sort(ara, l, mid);
    Merge_sort(ara, mid + 1, r);
    Merge(ara, l, mid, r);
}

void PrintLexicographicArray(vector<string>&ara, int n)
{
    for(int i=0; i<n; i++)
        cout<<ara[i]<<" ";
    cout << endl;
}

int main()
{
    int n;
    cin>>n;

    vector<string> ara(n);
    for(int i=0; i<n; i++)
        cin>>ara[i];

    Merge_sort(ara, 0, n-1);

    PrintLexicographicArray(ara, n);

    return 0;
}

/**
5
yellow apple children zzz chill
4
date cherry apple banana
**/
