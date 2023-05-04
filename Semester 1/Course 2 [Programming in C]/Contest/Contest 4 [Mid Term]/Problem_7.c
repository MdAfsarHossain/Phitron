#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);

    getchar();
    while(t--)
    {
        char ch[20];
        gets(ch);
        //getchar();
        int f = 0;
        int i;
        int len = strlen(ch);
        for(i=0; i<len; i++)
        {
            if(ch[i]!= ch[len-1-i])
            {
                f=1;
                break;
            }
        }

        if(f == 0)
        {
            if(len<=7)
            {
                printf("Case #3: ");
                puts(ch);
                //printf("\n");
            }
            else if(len > 7)
            {
                printf("Case #2: %c%d%c\n",ch[0], len-2,ch[len-1]);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }
    }
    return 0;
}

