#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        char s[100];
        scanf("%d", &n);
        getchar();
        gets(s);

        //puts(s);

        int i=0;
        int en = 0, pa = 0;
        while(s[i] != '\0')
        {
            if(s[i] == 'H')
            {
                en++;
            }

            if(s[i] == 'T')
            {
                pa++;
            }
            i++;
        }

        if(en>pa)
            printf("England\n");
        else
            printf("Pakistan\n");
    }
}

