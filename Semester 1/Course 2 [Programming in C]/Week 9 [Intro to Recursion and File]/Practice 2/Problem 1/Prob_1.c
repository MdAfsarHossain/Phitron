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
        printf("No File Found!!");
        return 0;
    }

    while(1)
    {
        char ch = fgetc(inputFile);
        if(ch == EOF)
        {
            break;
        }
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}



/*

    fscanf(inputFile, "%d", &n);

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        int x;
        fscanf(inputFile, "%d", &x);

        sum += x;
    }

    fprintf(outputFile, "Sum : %d\n", sum);

*/
