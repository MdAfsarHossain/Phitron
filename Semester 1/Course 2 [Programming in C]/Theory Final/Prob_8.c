/*
#include<stdio.h>

struct Student{
    int roll;
    int age;
};

int main()
{
    struct Student s = {12, 22};

    printf("Roll: %d\nAge: %d\n", s.roll, s.age);

    return 0;
}
*/
/*
#include<stdio.h>

struct Student{
    int roll;
    int age;
};

int main()
{
    struct Student s = {15, 23};
    struct Student* p;

    p = &s;

    printf("Roll: %d\nAge: %d\n", p->roll, p->age);

    return 0;
}
*/
#include<stdio.h>

struct Student{
    char name[50];
    int number;
    float marks;
};

void display(struct Student s)
{
    printf("Displaying Information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.number);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s;

    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", &s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.number);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    display(s);

    return 0;
}

















