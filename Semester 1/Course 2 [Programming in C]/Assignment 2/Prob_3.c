#include <stdio.h>
#include <string.h>

int check(char digit[], char ch[], int j)
{
    int i = 0;
    while(digit[i] != '\0')
    {
        if(digit[i] == ch[j])
        {
            return 1;
        }
        i++;
    }

    return 0;
}

int main()
{
    char ch[3] = "197";
    char digit[1000];

    gets(digit);

    int x=0;

    for(int t=0; t<3; t++)
    {
        if(check(digit, ch, t))
        {
            x++;
        }
        else
        {
            printf("No");
            return 0;
        }
    }

    if(x==3)
        printf("Yes");

    return 0;
}
