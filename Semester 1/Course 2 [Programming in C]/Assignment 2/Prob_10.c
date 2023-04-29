#include<stdio.h>

char grade(int n)
{
    char ch;

    if(n>=80 && n<=100)
    {
        ch = 'A';
    }
    else if(n>=60 && n<=79)
    {
        ch = 'B';
    }
    else if(n>=40 && n<=59)
    {
        ch = 'C';
    }
    else
    {
        ch = 'F';
    }

    return ch;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%c", grade(n));

    return 0;
}
