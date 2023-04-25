#include<stdio.h>

struct Student{
    double weight;
    int roll;
};

int main()
{

    struct Student s[5];

    for(int i=0; i<5; i++)
    {
        s[i].weight = 50.0+(i*2);
        s[i].roll = i+1;
    }

    for(int i=0; i<5; i++)
    {
        printf("Weight: %.2f\nRoll: %d\n\n", s[i].weight, s[i].roll);
    }
    return 0;
}
