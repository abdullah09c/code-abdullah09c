#include <stdio.h>

int compArray(int *a, int *b)
{
  return *a - *b;
}

/* if return value 
(>0) then, if the element pointed by a goes after the element pointed by b. 
(<0) then, if the element pointed by a goes before the element pointed by b.
(=0) then, if the element pointed by a is equivalent to the element pointed by b.
(*a - *b) : (Array will be sorted in Ascending order)
(*b - *a) : (Array will be sorted in Descending order)
*/

int main()
{
  int n,i;
  scanf("%d", &n);
  int ara[n];
  
  for(i = 0; i < n; i++)
  scanf("%d", &ara[i]);
  
  qsort(ara, n, sizeof(int), compArray);

  /*qsort(a, b, c, d)
   a = Array_name
   b = total_elements
   c = size of each element ie. int 4 byte, double 8 byte
   d = A funtion that compare two elements
  */
  
  printf("\n");
  for(i = 0; i < n; i++)
  printf("%d ", ara[i]);
  
  return 0;
}
