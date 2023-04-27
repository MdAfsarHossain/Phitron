#include<stdio.h>
int main()
{
    int t;

    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile == NULL)
    {
        printf("File not Found!!");
        return 0;
    }

    fscanf(inputFile, "%d", &t);

    while(t--)
    {
        int n;
        fscanf(inputFile, "%d", &n);

        if(n>0)
        {
            for(int i=n; i>=(-n); i--)
            {
                fprintf(outputFile, "%d ", i);
            }
            fprintf(outputFile, "\n");
        }
        else
        {
            for(int i=n; i<=(-n); i++)
            {
                fprintf(outputFile, "%d ", i);
            }
            fprintf(outputFile, "\n");
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
