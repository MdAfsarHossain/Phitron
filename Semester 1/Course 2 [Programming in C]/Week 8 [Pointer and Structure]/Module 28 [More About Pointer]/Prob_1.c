#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    int* ptr;

    ptr = (int*) malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed.\n");
    }
    else
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", (ptr+i));
        }

        for(i=0; i<n; i++)
        {
            printf("%d ", *(ptr+i));
        }
    }

    int x;
    printf("\n");
    scanf("%d", &x);
    //n += x;

    ptr = realloc(ptr, (n+x)*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed.\n");
    }
    else
    {
        //printf("\n");
        for(int i=n; i<(n+x); i++)
        {
            scanf("%d", (ptr+i));
        }

        for(int i=0; i<(n+x); i++)
        {
            printf("%d ", *(ptr+i));
        }
    }

    free(ptr);

    return 0;
}

