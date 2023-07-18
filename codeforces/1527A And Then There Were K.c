#include <stdio.h>
int main()
{
  int i, n, t, s = 0;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    if(n == 1)
    printf("0\n");
    
    else {
    
    for(i = 0; ; i = s) {
      
      s = 2*i + 1;
      if(n <= 2*s + 1) {
        printf("%d\n", s);
        break;
      }
    }
    
   } 
    
  }
  
  return 0;
}
