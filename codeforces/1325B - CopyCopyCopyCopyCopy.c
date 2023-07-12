#include <stdio.h>
int main()
{
  int i,t,j,n;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++)
    scanf("%d", &ara[i]);
    
    // sorting.....
    
    for(i = 0; i < n; i++)
    for(j = i + 1; j < n; j++)
    if(ara[i] > ara[j])
   ara[i] ^= ara[j] ^= ara[i] ^= ara[j];
  
    //.........
    int count = 0, temp = 0;
    for(i = 0; i < n; i++)
    if(ara[i]!=temp) {
      count++;
      temp = ara[i];
    }
    
    printf("%d\n", count);
    
  }
  
  
  return 0;
}
