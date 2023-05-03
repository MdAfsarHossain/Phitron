#include<stdio.h>
#define ll long long int
int main()
{
    int t, n, time;
    char ch;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%c", &n, &ch);

        if(n<60)
        {
           time = (60-n)+100;
        }
        else if(n>59 && n<80)
        {
            time = (80 - n)*2 + 60;
        }
        else if(n>79)
        {
            time = (100 - n) * 3;
        }

        printf("%d minutes\n", time);
    }
    return 0;
}

