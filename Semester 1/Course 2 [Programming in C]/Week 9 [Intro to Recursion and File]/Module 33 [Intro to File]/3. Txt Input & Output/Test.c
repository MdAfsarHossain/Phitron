#include<stdio.h>
int main()
{
    int n;
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if(inputFile == NULL)
    {
        //printf("No Found.");
        fprintf(outputFile, "Not Found.\n");
        return 0;
    }

    fscanf(inputFile, "%d", &n);
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        int x;
        fscanf(inputFile, "%d", &x);
        sum += x;
    }

    fprintf(outputFile, "Sum: %d\n", sum);

    return 0;
}
