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

    int sort_ara[n+1];
    int min, m_index;
    int j;

    for(int i=0; i<n; i++)
    {
        min = input[0];
        m_index = 0;

        for(j=0; j<n; j++)
        {
            if(input[j]<min)
            {
                min = input[j];
                m_index = j;
            }
        }

        sort_ara[i] = min;
        input[m_index] = 9999;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", sort_ara[i]);
    }

    return 0;
}
