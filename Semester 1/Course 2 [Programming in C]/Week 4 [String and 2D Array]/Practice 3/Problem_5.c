#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    int x, y;
    scanf("%d%d", &x, &y);

    switch(ch)
    {
    case '+':
        printf("%d", x+y);
        break;
    case '-':
        printf("%d", x-y);
        break;
    case '*':
        printf("%d", x*y);
        break;
    case '/':
        printf("%d", x/y);
        break;
    }

    return 0;
}
