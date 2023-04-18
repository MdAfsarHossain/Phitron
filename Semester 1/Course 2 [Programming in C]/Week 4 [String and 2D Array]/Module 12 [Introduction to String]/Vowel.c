#include<stdio.h>
int main()
{
    char sen[1000];

    //gets(sen);
    fgets(sen, sizeof(sen), stdin);

    int i=0, vowel = 0;
    while(sen[i] != '\0')
    {
        if(sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' ||
           sen[i] == 'o' || sen[i] == 'u')
        {
            vowel++;
        }
        i++;
    }

    printf("%s\nVowel : %d", sen, vowel);

}
