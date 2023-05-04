#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    //getchar();

    char ch[100];
    getchar();
    gets(ch);

    int p_i=0, m_i=0, max=0, plus = 0, minus = 0;
    int plusF = 0, minusF = 0;

    int len, cur, best;
    len = strnlen(ch);

    cur = best = 1;
    for(int i=1; i<len; i++)
    {
        if(ch[i] == ch[i-1])
        {
            cur++;
        }
        else
        {
            cur = 1;
        }

        if(cur>best)
        {
            best = cur;
        }
    }

    printf("%d", best);

    /*
    while(ch[p_i] != '\0')
    {
        if(ch[p_i] == '+' && ch[p_i+1] == '+')
        {
            plus++;
        }
        else
        {
            if(plus>plusF)
            {
                plusF = plus + 1;
                plus = 0;
            }
        }

        p_i++;
    }

    while(ch[m_i] != '\0')
    {
        if(ch[m_i] == '-' && ch[m_i+1] == '-')
        {
            minus++;
        }
        else
        {
            if(minus>minusF)
            {
                minusF = minus + 1;
                minus = 0;
            }
        }

        m_i++;
    }

    //printf("%d %d\n", plusF, minusF);
    if(plusF>minusF)
        printf("%d", plusF);
    else
        printf("%d", minusF);
        */
    return 0;
}

