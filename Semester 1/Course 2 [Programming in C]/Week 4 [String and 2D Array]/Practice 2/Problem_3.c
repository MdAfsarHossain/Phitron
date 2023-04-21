#include<stdio.h>
int main()
{
    char ch[1000];
    gets(ch);

    int i =0, sum = 0, len = 0;

    while(ch[i] != '\0')
    {
        len++;
        sum += ch[i] - 'a' + 1;
        i++;
    }

    for(i=1; i<=len; i++)
    {
        int n = pow(2,i);
        if(n == sum)
        {
            printf("YES");
            printf("\ncost = 2^%d", i);
            return 0;
        }
        else if(n>sum)
        {
            printf("NO");
            return 0;
        }
    }

    //printf("%d %d", len, sum);
}
