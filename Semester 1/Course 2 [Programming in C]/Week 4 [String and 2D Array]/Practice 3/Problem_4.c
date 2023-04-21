#include<stdio.h>
int main()
{
    char ch[1000], s[10000];
    gets(ch);

    s[0] = ch[0];
    //int i = 1;
    int k = 1;

    for(int i=0; i<strlen(ch); i++)
    {
        for(int j=0; j<strlen(s); j++)
        {
            if(ch[i] != s[j])
            {
                s[k] = ch[i];
                k++;
                break;
            }
        }
    }
    puts(s);
    //printf("%d", strlen(ch));
    //puts(ch);

    return 0;
}
