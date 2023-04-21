#include<stdio.h>
int main()
{
    int t, len = 0, x = 0;
    scanf("%d", &t);

    char ch[1000];
    char copy_ch[1000];

    getchar();
    gets(copy_ch);

    for(int k=1; k<t; k++)
    {
        //getchar();
        int i=0;
        len = 0;

        while(copy_ch[i] != '\0')
        {
            len++;
            i++;
        }

        fgets(ch, sizeof(ch), stdin);
        int j = 0;

        while(ch[j] != '\0')
        {
            copy_ch[len+j] = ch[j];
            j++;
        }
        //copy_ch[len+j] = '\0';
        //puts(copy_ch);
    }
    //printf("%d\n", len);
    printf("%s\n", copy_ch);
    //puts(copy_ch);
}
