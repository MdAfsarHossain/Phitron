#include<stdio.h>
#include<string.h>
int main()
{
    //char ch = 'A';
    char name[1000];

    //ch += 32;

    fgets(name, sizeof(name), stdin);

    int l = strlen(name) - 1;

    int i=0;
    while(name[i] != '\0')
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
        i++;
    }
    //name[i] = '\0';
    puts(name);

    //printf("%c", ch);


    return 0;

    /**
    A = 65 (32)  97 = a
    B = 66 (32)  98 = b
    **/
}
