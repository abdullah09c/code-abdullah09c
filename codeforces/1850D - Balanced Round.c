#include <stdio.h>
#include <stdlib.h>
int cmpArray(void const *a, void const *b)
{
  return *((int*)a) - *((int*)b);
}

int main()
{
   int t, n, k;
   scanf("%d", &t);
   while (t--)
   {
    scanf("%d%d", &n, &k);
    int i, ara[n];
    for ( i = 0; i < n; i++)
    {
      scanf("%d", &ara[i]);
    }

   
   // for(i = 0; i < n; i++)
    //printf("%d ", ara[i]);

    if(n == 1)
    printf("0\n");

    else {
       qsort(ara, n, sizeof(int), cmpArray);
       int count = 0, max_count = 0;
       for(i = 0; i < n-1; i++) {
        if((ara[i+1] - ara[i]) <= k)
          count++;
        else {
          if(max_count < count)
          max_count = count;
          count = 0; 
        }
       }
       if(max_count < count)
          max_count = count;
       printf("%d\n", n - (max_count + 1));
    }
    
   }
   

   return 0;
}
