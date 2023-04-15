#include<stdio.h>
int main()
{
    int n, k, rooms, x;
    while(scanf("%d%d", &n, &k)==2)
    {
        rooms = x = 0;
        for(int i=1; i<=n; i++)
        {
            rooms += 100 * i * k;
        }

        x = (k*(k+1)/2) * n;

        printf("%d\n", rooms+x);
    }

    return 0;
}
