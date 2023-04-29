#include <stdio.h>
#include <string.h>

void convert(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] += 32;
        }
        else if(str[i]>= 'a' && str[i]<='z')
        {
            str[i] -= 32;
        }
        i++;
    }

    puts(str);
}

int main()
{
    char str[1000];
    gets(str);

    convert(str);

    return 0;
}
