#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n>17)
    {
        printf("Congratulation! You are eligible for casting your vote.\n");
    }
    else
    {
        printf("SORRY! You are not eligible for casting your vote.\n");
    }

    return 0;
}
