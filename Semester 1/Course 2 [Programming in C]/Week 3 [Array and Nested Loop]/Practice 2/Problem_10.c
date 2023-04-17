#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int input[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &input[i]);
    }

    int ara[n+1];
    int uni_index = 0;

    for(int i=0; i<n; i++)
    {
        ara[i] = 0;
    }

    for(int i=0; i<n; i++)
    {
        int select = input[i];
        int found = 0;

        for(int j=0; j<n; j++)
        {
            if(ara[j] == input[i])
            {
                found = 1;
            }
        }

        if(found == 0)
        {
            ara[uni_index] = input[i];
            uni_index++;
        }
    }

    for(int i=0; i<uni_index; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}
