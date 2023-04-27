#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "a");

    if(inputFile == NULL)
    {
        printf("No file found!!");
        return 0;
    }

    int n;
    fscanf(inputFile, "%d", &n);

    if((n%4==0 && n%100!=0) || (n%400==0))
    {
        fprintf(outputFile, "%d-->YES\n", n);
    }
    else
    {
        fprintf(outputFile, "%d-->NO\n", n);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
