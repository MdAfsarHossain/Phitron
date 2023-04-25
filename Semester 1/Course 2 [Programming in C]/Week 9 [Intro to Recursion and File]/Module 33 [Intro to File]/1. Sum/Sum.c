#include<stdio.h>
int main()
{
    int n, sum=0, x;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &x);
        sum += x;
    }

    printf("Sum -> %d\n", sum);

    return 0;
}


/// CMD
/// Sum.exe < input.txt  ----- input
/// Sum.exe > output.txt ----- output
/// Sum.exe < input.txt > output.txt
