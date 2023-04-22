#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    char s[t];
    getchar();
    while(t--)
    {
        gets(s);

        puts(s);
    }
}
