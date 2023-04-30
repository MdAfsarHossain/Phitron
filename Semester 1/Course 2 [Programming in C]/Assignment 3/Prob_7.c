#include<stdio.h>

void swap(int ara[], int l, int r)
{
    int temp;
    int* x = &ara[l-1];
    int* y = &ara[r-1];

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int q;
    scanf("%d", &q);

    int l, r;

    while(q--)
    {
        scanf("%d%d", &l, &r);

        swap(ara, l, r);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}

