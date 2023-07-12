#include <stdio.h>
void printArray(int *A, int n);
void insertionSort(int *ara, int n);
void bubbleSort(int *ara, int n);
void binary_Search(int *ara, int n);

int main()
{
  int n,i,t;
  printf("Input length of Array : ");
  scanf("%d", &n);
  int ara[n];
  printf("Input Array : \n");
  for(i = 0; i < n; i++)
  scanf("%d", &ara[i]);
  printf("\n1. Insertion Sort\n"
          "2. Bubble Sort\n"
          "3. Binary Search\n");
  printf("Submit : ");
  scanf("%d", &t);
  if(t == 1)
  insertionSort(ara, n);
  else if(t == 2) {
  bubbleSort(ara, n);
  printArray(ara,n);
  }
  else if(t == 3)
  binary_Search(ara,n);
  else
  printf("\n\tError.....\n");
  return 0;
};



void insertionSort(int *ara, int n)
{
  int i, j, key;
  for(i = 1; i < n; i++) {
  key = ara[i];
  for(j = i-1; (ara[j] < key && j >= 0); j--) {
    ara[j+1] = ara[j];
  }
  ara[j+1] = key;
  }
  
  printArray(ara, n);
  
}

void bubbleSort(int *ara, int n)
{
  int i, j, temp;
  for(i = 0; i < n; i++) {
    for(j = i+1; j < n; j++) {
      if(ara[i] > ara[j]) {
        temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;
      }
      }
    }
    
    //printArray(ara, n);
    
}

void binary_Search(int *ara, int n)
{
  int low_index = 0, high_index = n-1;
  int mid_index, num;
  
  printf("Enter number that you want to search : ");
  
  scanf("%d", &num);
  
   bubbleSort(ara, n);
   
  while(low_index <= high_index) {
   
   mid_index = (low_index+high_index)/2;
   
  if(ara[mid_index] == num) {
    printf("%d is found\n", num);
    break;
  }
  else if(num > ara[mid_index])
  low_index = mid_index + 1;
  else
  high_index = mid_index - 1;
  }
  
  if(low_index > high_index)
  printf("%d is not found\n", num);
  
  //printArray(ara, n);
    
}




void printArray(int *A, int n)
{
  for(int i = 0; i < n; i++)
  printf("%d ", A[i]);
}
