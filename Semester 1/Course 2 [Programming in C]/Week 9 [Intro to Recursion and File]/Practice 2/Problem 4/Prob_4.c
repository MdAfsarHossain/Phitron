#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile == NULL)
    {
        printf("No file found!!");
        return 0;
    }

    int n;
    int sum = 0;
    int x;

    fscanf(inputFile, "%d", &n);

    while(n--)
    {
        fscanf(inputFile, "%d", &x);
        sum += x%10;
    }

    fprintf(outputFile, "Sum = %d", sum);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
