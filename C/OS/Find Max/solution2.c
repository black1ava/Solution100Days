#include<stdio.h> //time complexity O(1)
#include<stdlib.h>

int cmp(const void *a, const void *b){
  return *(int *)b - *(int *)a;
}

int main(){
  int n;
  printf("Elements in an array: ");
  scanf("%d", &n);
  int arr[n];
  
  printf("Input %d integers in one line seperate by space : ", n);
  
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  
  qsort(arr, n, sizeof(int), cmp);
  
  printf("Largest number is %d", *arr);
  
  return 0;
}
