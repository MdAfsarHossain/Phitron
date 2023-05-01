#include<stdio.h>
int main()
{
    char s1[] = "ac";
    char s2[] = "ab";

    int i=0;
    while(s1[i] != '\0')
    {
        if(s1[i] < s2[i])
        {
            puts(s1);
            puts(s2);
            return 0;
        }
        else
        {
            puts(s2);
            puts(s1);
            return 0;
        }
        i++;
    }
    return 0;
}



