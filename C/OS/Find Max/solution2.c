#include<stdio.h> //time complexity O(1)
#include<stdlib.h>

#define L 6

int cmp(const void *a, const void *b){
  return *(int *)b - *(int *)a;
}

int main(){
  int arr[L];
  
  printf("Input 6 integers in one line seperate by space : ");
  
  for(int i = 0; i < L; i++){
    scanf("%d", &arr[i]);
  }
  
  qsort(arr, L, sizeof(int), cmp);
  
  printf("Largest number is %d", *arr);
  
  return 0;
}