#include<stdio.h>

void solve(char ch[], int x)
{
    int i=0, l;
    while(ch[i] != '\0')
    {
        ch[i] += x;
        l = (int)(ch[i]);
        if(l>122)
        {
            ch[i] = (char)(l - 122 + 96);
        }
        i++;
    }
}

int main()
{
    char ch[1000];
    int x;

    gets(ch);
    scanf("%d", &x);

    solve(ch, x);

    puts(ch);

    return 0;
}

/*
a = 97 + 5
b = 98 + 5

u = 117 + 5 = z
v = 118 + 5 = a   // 123
y = 121 + 5
z = 122 + 5

123 - 122 = 1 + 96 = 97
126 - 122 = 4 + 96 = 100
*/
