#include<stdio.h>
int main()
{
    char ch[1000];
    gets(ch);

    int i=0, len=0;
    while(ch[i] != '\0')
    {
        len++;
        i++;
    }

    int c = 1;
    for(int i=0, j=len-1; i<j; i++, j--)
    {
        if(ch[i] != ch[j])
        {
            printf("NO");
            c = 0;
            break;
        }
    }

    if(c==1)
    {
        printf("YES");
    }

    //puts(ch);
}
