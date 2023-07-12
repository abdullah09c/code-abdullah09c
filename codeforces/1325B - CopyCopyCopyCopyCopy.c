#include <stdio.h>
int main()
{
  int i,t,j,n;
  scanf("%d", &t);
  while(t--) {
    int flag, count = 0;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
    scanf("%d", &ara[i]);
    flag = 0;
    for(j = 0; j <= i; j++) {
    if(ara[i] == ara[j])
    flag++;
    }
    
    if(flag == 1)
    count++;
    }
  
    printf("%d\n", count);
    
  }
  
  
  return 0;
}
