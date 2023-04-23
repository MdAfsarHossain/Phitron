#include<stdio.h>
void solve()
{
    char ch;
    scanf("%c", &ch);
    int a, b;
    scanf("%d%d", &a, &b);

    switch(ch)
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        printf("%d", a/b);
        break;
    }
}

int main()
{
    solve();
}
