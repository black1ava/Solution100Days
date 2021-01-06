#include<stdio.h> //time complexity O(n)
#include<limits.h>

#define L 6

int max = INT_MIN;

int larger(int a, int b){
  return a > b ? a : b;
}

int maximum(int *arr){
  
  for(int i = 0; i < L; i++){
    if(*(arr + i) > max){
      
      max = *(arr + i);
    }
  }
  
  return max;
}

int main(){
  int arr[L];
  
  printf("Input 6 integers in one line seperate by space : ");
  
  for(int i = 0; i < L; i++){
    scanf("%d", &arr[i]);
  }
  
  printf("Largest number is %d", maximum(arr));
  return 0;
}