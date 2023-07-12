#include <stdio.h>
int main()
{
  int t, a,b,c,d;
  scanf("%d", &t);
  while(t--) {
    scanf("%d%d%d%d", &a, &b, &c, &d);		if(a+b >= c) {
    printf("%d %d %d\n", a, b, c);
    continue;
    }
    else if(b+c >= d) {
    printf("%d %d %d\n", b, c, d);
    continue;
    }
    else{
    printf("%d %d %d\n", c, d, a);
    continue;
    }
    
    
    
  }
  
  return 0;
}
