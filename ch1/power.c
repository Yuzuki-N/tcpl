#include <stdio.h>

int my_power(int x, int y)
{
    if (y < 0)
        return 0;
    else if (y == 0)
        return 1;
    else if (y == 1)
        return x;
    while (y > 0)
        return my_power(x, y - 1) * x;
}

int power(int base, int n)
{
    int i, p;
    p = 1;
    
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

int main()
{
    int i;
    
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}
