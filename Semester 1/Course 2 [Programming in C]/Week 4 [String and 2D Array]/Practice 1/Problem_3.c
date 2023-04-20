#include<stdio.h>
int main()
{
    char ch[1000];
    //gets(ch);
    fgets(ch, sizeof(ch), stdin);

    int vo = 0, con = 0;
    int i=0;

    while(ch[i] != '\0')
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' ||
                    ch[i] == 'o' || ch[i] == 'u')
            {
                vo++;
            }
            else
            {
                con++;
            }
        }
        i++;
    }

    printf("Vowel - %d\nConsonant - %d", vo, con);

    //puts(ch);
}
