#include<stdio.h>
int main()
{
    char ch[100];

    scanf("%[^\n]s", ch);

    printf("Output: %s\n", ch);

    return 0;
}
