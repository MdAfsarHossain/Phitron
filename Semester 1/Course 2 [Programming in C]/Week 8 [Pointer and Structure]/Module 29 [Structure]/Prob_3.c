#include<stdio.h>

struct Student{
    double weight;
    int roll;
    int age;
};

int main()
{
    struct Student s = {.roll=12, .weight=75.5, .age=22};
    struct Student* sp;

    sp = &s;

    printf("%d %.2lf %d\n", sp->roll, sp->weight, sp->age);

    return 0;
}
