#include <stdio.h>
int main()
{
  int t, n, i, count, sum;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    int ara[n];
    sum = 0, count = 0;
    for(i = 0; i < n; i++) {
    scanf("%d", &ara[i]);
    sum += ara[i];
    }
    
    if(sum%n != 0)
    printf("-1\n");
    else {
      int mean = sum / n;
      for(i = 0; i < n; i++)
      if(ara[i] - mean > 0)
      count++;
      
      printf("%d\n", count);
      
    }
    
  }
    
  return 0;
}
