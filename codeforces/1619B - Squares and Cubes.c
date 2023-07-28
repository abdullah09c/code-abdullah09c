#include <stdio.h>
#include <math.h>
int main()
{
   long long t, n, i;
   scanf("%lld", &t);
   while (t--)
   {
    scanf("%lld", &n);
    long long count, sq, cb, common;
    sq = sqrt(n);
    cb = cbrt(n);
    common = sqrt(cb);
    count = sq+cb-common;
    
    printf("%lld\n", count);
   }
   

   return 0;
}
