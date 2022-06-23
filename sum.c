#include <stdio.h>

void main()
{
   int num;
   int *p = &num;
   for (*p = 10; p; (*p)--)
      printf("%d", *p);
}
