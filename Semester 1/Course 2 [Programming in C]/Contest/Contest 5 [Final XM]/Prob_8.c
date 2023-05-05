#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char s[100];
    gets(s);

    int freq[27];
    for(int i=0; i<27; i++)
    {
        freq[i] = 0;
    }

    for(int i=0; i<n; i++)
    {
        freq[(s[i] - 'a') + 1]++;
    }

    int total = 0;
    for(int i=1; i<27; i++)
    {
        if(freq[i]==1)
        {
            total++;
      //      printf("%d ", total);
        }
    }

    printf("%d", total);
    //puts(s);
}
