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
    fscanf(inputFile, "%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            fprintf(outputFile, " ");
        }
        for(int k=1; k<=n; k++)
        {
            fprintf(outputFile, "#");
        }

        fprintf(outputFile, "\n");
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
