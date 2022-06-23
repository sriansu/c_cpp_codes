#include <stdio.h>
int fun(int a, int *ab, int **abc)
{

    int y, z;

    **abc += 1;

    z = **abc;

    *ab += 2;

    y = *ab;

    a += 3;
    return a + y + z;
}
int main()

{

    int c, *b, **a;

    c = 4;
    b = &c;
    a = &b;

    printf("%d", fun(c, b, a));
    return 0;
}