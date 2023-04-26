#include<stdio.h>
int main()
{
    int n;
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "a");

    if(inputFile == NULL)
    {
        //printf("NO FOUND.");
        fprintf(outputFile, "Input file not found at 02:35PM");
        return 0;
    };

    fscanf(inputFile, "%d", &n);

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        sum += a;
    }
    fprintf(outputFile, "SUM: %d\n", sum);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
