#include<stdio.h>
int main()
{
    char ch[1000];
    gets(ch);

    int len = strlen(ch);
    int largest_element = 26;
    int frequency[largest_element+1];

    for(int i=0; i<=largest_element; i++)
    {
        frequency[i] = 0;
    }

    for(int i=0; i<len; i++)
    {
        frequency[(ch[i]-'a')+1]++;
    }

    int total = 0;
    for(int i=1; i<=26; i++)
    {
        if(frequency[i]>=1)
        {
            total++;
        }
    }

    int next=0;
    while(next!=total)
    {
        int max=-1, index=-1;
        char ch;

        for(int i=1; i<=26; i++)
        {
            if(frequency[i]>max)
            {
                max = frequency[i];
                ch = i+96;
                index = i;
            }
        }

        for(int i=1; i<=max; i++)
        {
            printf("%c", ch);
        }
        frequency[index] = 0;
        next++;
    }

    printf("\n");

    return 0;
}
