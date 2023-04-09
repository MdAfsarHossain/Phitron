#include<stdio.h>
int main()
{
    int p, c, com, total, roll;
    double per;
    char name[100];

    printf("Input the Roll Number of the student: ");
    scanf("%d", &roll);
    printf("Input the Name of the student: ");
    //scanf("%[^\n]s", name);
    scanf("%s", &name);
    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    scanf("%d%d%d", &p, &c, &com);

    printf("Roll No: %d\n", roll);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", p);
    printf("Marks in Chemistry: %d\n", c);
    printf("Marks in Computer Application: %d\n", com);

    total = p + c + com;
    per = total / 3.0;

    printf("Total Marks: %d\n",total);
    printf("Percentage: %.2lf\n",per);

    if(per>=60.0)
    {
        printf("Division: First.\n");
    }
    else if(per>=48.0 && per<60.0)
    {
        printf("Division: Second.\n");
    }
    else if(per >= 36.0 && per<48.0)
    {
        printf("Division: Pass.\n");
    }
    else
    {
        printf("Fail.\n");
    }

    return 0;
}
