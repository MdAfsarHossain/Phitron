#include<stdio.h>
#include<string.h>
int main()
{
    char s[102], t[102];

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    for(int i=0; i<strlen(s)-1; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i] += 32;
        }
        if(t[i]>='A' && t[i]<='Z')
        {
            t[i] += 32;
        }
    }

    int same = 1;
    for(int i=0; i<strlen(s)-1; i++)
    {
        if(s[i]<t[i])
        {
            same = 0;
            printf("-1\n");
            return 0;
        }
        else if(s[i]>t[i])
        {
            same = 0;
            printf("1\n");
            return 0;
        }
    }

    if(same == 1)
    {
        printf("0\n");
    }

    return 0;
}
