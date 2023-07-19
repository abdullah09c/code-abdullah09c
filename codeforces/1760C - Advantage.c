#include <stdio.h>
int main()
{
   int t, n, i, max, max2;
   scanf("%d", &t);
   while (t--)
   {
    scanf("%d", &n);
    int ara[n];
    max = 0, max2 = 0;
    for(i = 0; i < n; i++) {
    scanf("%d", &ara[i]);
    if(ara[i] > max) {
        max2 = max;
        max = ara[i];
    }
    else if(ara[i] > max2)
    max2 = ara[i];
    }

    for ( i = 0; i < n; i++)
    {
        if(ara[i] == max)
        printf("%d ", ara[i] - max2);
        else
        printf("%d ", ara[i] - max);
    }

    printf("\n");


    }
    
    
   

   return 0;
}
