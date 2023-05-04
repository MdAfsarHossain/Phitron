#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    getchar();
    while(t--)
    {
        //getchar();
        int n;
        scanf("%d", &n);
        char ch[1000];
        getchar();
        gets(ch);

        int i=0, cnt=0;
        //getchar();
        while(ch[i] != '\0')
        {
            if((ch[i] == '1' && ch[i+1] == '0') || (ch[i] == '0' && ch[i+1] == '1'))
            {
                cnt++;
            }
            i++;
        }
        //puts(ch);
        //ch[i] = '\0';

        printf("%d\n", cnt);
        //cnt = 0;
        //getchar();
    }
    return 0;
}

