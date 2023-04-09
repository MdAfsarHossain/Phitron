#include<stdio.h>
int main()
{
    int p, m, c, total, mp;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &p);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &c);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &m);

    total = p + c + m;
    mp = m + p;

    printf("Total marks in Maths, Physics and Chemistry: %d\n", total);
    printf("Total marks in Maths and Physics: %d\n", mp);

    if((m>=65 & p>=55 && c>=50)&& (total>=190 || mp>=140))
    {
        printf("The candidate is eligible for admission.\n");
    }
    else
    {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
