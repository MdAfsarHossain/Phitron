#include<stdio.h>

struct Student{
    int roll;
    int age;
    float weight;
};

int main()
{
    int a;
//    struct Student s = {12, 19, 75.5};
//    struct Student s = {.age = 12, .roll = 19, .wieght = 75.5}; // Designated
//    struct Student s;
//    scanf("%d %d %f", &s.roll, &s.age, &s.weight);
    struct Student s1;
    struct Student s2;

    s1.roll = 15;
    s1.age = 22;
    s1.weight = 75.5;

    s2.roll = 15;
    s2.age = 22;
    s2.weight = 75.5;

    printf("Student 1 Info:\n");
    printf("%d %d %.2f", s1.roll, s1.age, s1.weight);

    return 0;
}
