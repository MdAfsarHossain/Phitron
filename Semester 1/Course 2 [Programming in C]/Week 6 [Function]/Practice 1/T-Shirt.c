#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s1[55], s2[55];
        scanf("%s%s", s1, s2);

        char ch1, ch2;
        int sz1, sz2;

        sz1 = strlen(s1);
        sz2 = strlen(s2);

        ch1 = s1[sz1-1];
        ch2 = s2[sz2-1];

        if(ch1 == ch2)
        {
            if(ch1 == 'S')
            {
                if(sz1 > sz2)
                    printf("<\n");
                else if(sz1 <sz2)
                    printf(">\n");
                else
                    printf("=\n");
            }
            else
            {
                if(sz1>sz2)
                    printf(">\n");
                else if(sz1 < sz2)
                    printf("<\n");
                else
                    printf("=\n");
            }
        }
        else
        {
            if((ch1=='L' && ch2=='M' ) || (ch1=='L' && ch2=='S') || (ch1=='M' && ch2=='S'))
                printf(">\n");
            else
                printf("<\n");
        }
    }
}
