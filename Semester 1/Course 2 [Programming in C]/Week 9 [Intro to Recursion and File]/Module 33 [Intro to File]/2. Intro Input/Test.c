#include<stdio.h>
int main()
{
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");

    FILE *outputFile;
    outputFile = fopen("output.txt", "w");

    if(inputFile == NULL)
    {
        printf("No File Found\n");
        return 0;
    }

    while(1)
    {
        char ch = fgetc(inputFile);
        if(ch==EOF)
        {
            break;
        }
        fputc(ch, outputFile);
    }

    return 0;
}
