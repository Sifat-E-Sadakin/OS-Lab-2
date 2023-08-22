#include <stdio.h>

int fun(int k);

struct perfect
{
    int s;
    int e;
    int sum;
};

int main()
{

    struct perfect p;

    scanf("%d", &p.s);
    scanf("%d", &p.e);
    printf("============ \n");

    for (int i = p.s; i <= p.e; i++)
    {
        p.sum = fun(i);
        if (p.sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

int fun(int k)
{
    int s = 0;
    for (int j = 1; j < k; j++)
    {
        if (k % j == 0)
        {
            s = s + j;
        }
    }
    return s;
}
