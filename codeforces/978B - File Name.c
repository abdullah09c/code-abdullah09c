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
  
  else
  count = 0;
  
  if (count >= 3)
  result++; 
  
  }
  
  printf("%d", result);
  return 0;
}
