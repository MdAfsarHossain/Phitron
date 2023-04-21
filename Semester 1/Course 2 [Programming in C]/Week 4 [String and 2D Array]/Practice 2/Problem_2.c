#include<stdio.h>
int main()
{
    char ch[1000];
    gets(ch);

    int i=0;
    if(ch[i] == '0' || ch[i] == '1')
    {
        int flag = 1;
        while(ch[i] != '\0')
        {
            if(ch[i] == '1' || ch[i] == '0')
            {
                flag = 1;
                i++;
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
            i++;
        }

        if(flag == 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}
