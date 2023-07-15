#include <stdio.h>
int main()
{
  int i,n, count = 0, result = 0;
  scanf("%d", &n);
  char str[n + 1];
  scanf("%s", str);
  
  for(i = 0; i < n; i++) {
  if(str[i] == 'x')
  count++;
  
  if(str[i]!= 'x') {
  if(count >= 3)
  result += count - 2;
  count = 0;
  }
  
  }
  
  if(count >= 3)
  result += count - 2;
  
  printf("%d", result);
  return 0;
}
