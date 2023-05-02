///Syntax error
int main()
{
    int a //here semi colon(;)missed
}
In C programming we know every line end with semicolon. But here int a this line don't finish with semicolon. So, this is Syntax error.

///Run-time error
void main()
{
    int ara[3] = {10,20,30};

    int x = ara[4];// Here array out of bounds error occurs
}

int main()
{
    int a=10;
    int c=a/0; // Here number divisible zero error occurs
}

We know any number couldn't divide by 0. But here a is divisible by 0. It's not possible that's why this is Run-time error.

Here, declare array size 3. This array store only 3 value. But here in a[4]
///Linker error
void Main() // Here Main() method used instead of main() method
{
}

We know in C programming every code start in the main function. We can declare this function line void main() {} or int main() {} . main is a keyword, so we must write main in all small letter. But here main declare by Main. So, this is linker error.
///Logical error
void main()
{
    printf("%d",sum(10,20));
}
int sum(int a, int b)
{
    return x*y;//expectation is sum but we are multiplying the numbers
}

In this code we want sum of the two numbers. But here sum function return multiplication of two numbers. That's why this is a Logical error.

///Semantic error
void main()
{
    int x, y, z;
    x + y = z; //semantic error
}

In C programming we can store any value in any variable. But it's has a fixed rules. The result of (a+b, a-b, a*b, a/b) this operation we can store any variable. Like x = a+b. But here this code z variables value store x + y. x, y they both are variable and + is a operator. we can't store any value in x+y. So, it's semantic error.
