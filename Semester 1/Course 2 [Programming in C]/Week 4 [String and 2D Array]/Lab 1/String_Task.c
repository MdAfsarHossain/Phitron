///CodeForces: 118A
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[102];
    fgets(ch, sizeof(ch), stdin);

    for(int i=0; i<strlen(ch)-1; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            ch[i] += 32;
        }

        if(!(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='y'))
        {
            printf(".%c", ch[i]);
        }
    }
    printf("\n");

    return 0;
}
