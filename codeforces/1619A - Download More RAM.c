#include <stdio.h>
// #include <stdlib.h>

// int cmpArray(void const *a, void const *b)
// {
//   return  (*(int*)a - *(int*)b);
// }

int main()
{
   int t, n, k;
   scanf("%d", &t);
   while (t--)
   {
     scanf("%d%d", &n, &k);
    int require[n], increase[n], i, j, temp, temp2;
    for ( i = 0; i < n; i++)
      scanf("%d", &require[i]);
      for ( i = 0; i < n; i++)
      scanf("%d", &increase[i]);
      // creating new Array

      // for ( i = 0; i < n; i++)
      // {
      //   total[i] = require[i] + increase[i];
      // }

      // // sorting....
      // qsort(require, n, sizeof(int), cmpArray);
      // qsort(total, n, sizeof(int), cmpArray);

      // for ( i = 0; i < n; i++)
      // {
      //   if(require[i] <= k)
      //   k += total[i] - require[i];
      // }


      for ( i = 0; i < n; i++)
      {
        for ( j = i+1; j < n; j++)
        {
          if (require[i] > require[j])
          {
            temp = require[i];
            require[i] = require[j];
            require[j] = temp;
            //swaping icrease array
            temp2 = increase[i];
            increase[i] = increase[j];
            increase[j] = temp2;
            
          }
        } 
      }
      

      // for ( i = 0; i < n; i++)
      // {
      //   printf("%d ", increase[i]);
      // }
      // printf("\n");

      for ( i = 0; i < n; i++)
      {
        if(require[i] <= k)
        k += increase[i];
      }
      

      printf("%d\n", k);
            
    
   }
   

   return 0;
}
