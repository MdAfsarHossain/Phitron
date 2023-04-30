#include<stdio.h>

void solve(char s[100])
{
    int i=0;
    while(s[i] != '\0')
    {
        if(i%2==1)
        {
            printf("%c%c", s[i], s[i]);
        }
        else
        {
            printf("%c", s[i]);
        }
        i++;
    }
}

int main()
{
    char s[1000];
    gets(s);

    solve(s);

    return 0;
}

