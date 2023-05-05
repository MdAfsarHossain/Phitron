#include<stdio.h>

int main()
{

    char ch[1000];
    gets(ch);

    char str[15] = "champions";

    int i=0;
    while(ch[i] != '\0')
    {
        if(ch[i] >= 65 && ch[i] <= 90)
        {
            ch[i] = ch[i] + 32;
        }
        i++;
    }
   // puts(ch);
    int j=0;
    int c = 0;

    i = 0;
    while(ch[i] !='\0')
    {
        if(ch[i] == str[j])
        {
            c++;
            j++;
        }
        else{
            j = 0;
            c = 0;
        }
        if(c==9)
        {
            printf("Yes\n");
            return 0;
        }
        i++;
    }
    printf("No");

    return 0;
}

