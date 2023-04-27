#include<stdio.h>
int main()
{
    int n;

    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile == NULL)
    {
        printf("No file found!!");
        return 0;
    }

    fscanf(inputFile, "%d", &n);

    for(int i=1; i<=n; i++)
    {
        fprintf(outputFile, "%d ", i);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
