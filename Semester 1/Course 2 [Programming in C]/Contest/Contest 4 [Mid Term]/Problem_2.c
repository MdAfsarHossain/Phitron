#include<stdio.h>
int main()
{
    char ch[30];
    gets(ch);

    int a, b;
    scanf("%d%d", &a, &b);
    int sum = 0;

    int i=0;
    while(ch[i] != '\0')
    {
        char op = ch[i];
        switch(op)
        {
        case '+':
            sum += a+b;
            break;
        case '*':
            sum += a*b;
            break;
        }
        i++;
    }

    printf("%d", sum);

    //puts(ch);
    return 0;
}

