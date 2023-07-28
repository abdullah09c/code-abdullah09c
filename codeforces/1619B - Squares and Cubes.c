#include <stdio.h>
#include <math.h>
int main()
{
   long long t, n, i;
   scanf("%lld", &t);
   while (t--)
   {
    scanf("%lld", &n);
    long long count = 0, temp;
    for(i = 1; i*i <= n; i++) {
      count++;
    }
    for (i = 1; i*i*i <= n; i++)
    {
      temp = sqrt(i*i*i);
      temp *= temp;
      if(temp != i*i*i)
      count++;
    }
    
    printf("%lld\n", count);
   }
   

   return 0;
}
