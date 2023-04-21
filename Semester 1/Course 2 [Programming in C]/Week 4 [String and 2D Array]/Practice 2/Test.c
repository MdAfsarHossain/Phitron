#include<stdio.h>
int main()
{
    char s1[50]="Phi";
    char s2[]="tron";
    int i=0,len=0,j=0;
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }
    printf("String = %s",s1);

}
