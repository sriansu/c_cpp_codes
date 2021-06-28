#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
  int max1=0;
  int max2=0;
  int max3=0,i,j;

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
  for( i=1;i<=n;i++)
  { for(j=(i+1);j<=n;j++)
     { int p=i&j;
      if(p>max1&&p<k)
      max1=p;}
  }
  printf("%d\n",max1);

  for(i=1;i<=n;i++)
  {    for(j=(i+1);j<=n;j++)
     {
      int q=i|j;
      if(q>max2&&q<k)
      max2=q;}
  }
  printf("%d\n",max2);

for(i=1;i<=n;i++)
  {   for(j=(i+1);j<=n;j++)
     {
      int r=i^j;
      if(r>max3&&r<k)
      max3=r;}
  }
  printf("%d",max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

