#include<stdio.h>
int main()
{
    int i=0;
    while(i<10)
    {
        printf("I am inside the loop");
        i++;
    }
    return 0;
}

/**
Here, while loop is the infinite loop.
Because here 1st declare i = 0.
Then go next line. Here a while loop.
1st while loop check condition true or false.
Here condition is i<10. It's means
as long as i is less than 10 every time
loop is work.
1st condition is i<10, here i = 0. This condition
is true.
So, loop is work and print "I am inside the loop".
Again check condition is true or false.
We can see here condition is true every time.
Because here i value is not increase. That's
why this loop is not finish and it's infinite loop.

We can fix this to add i++ under printf line.
This loop is work until condition is not false.
Every time get inside and increase i value.
When i value is goes to 10 then while loop is not
work because this condition is false.

**/
