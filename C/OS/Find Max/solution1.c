#include<stdio.h> //time complexity O(n)
#include<limits.h>

int max = INT_MIN;

int larger(int a, int b){
  return a > b ? a : b;
}

int maximum(int *arr, int length){
  
  for(int i = 0; i < length; i++){
    if(*(arr + i) > max){
      
      max = *(arr + i);
    }
  }
  
  return max;
}

int main(){
  int n;
  printf("Elements in an array : ");
  scanf("%d", &n);
  int arr[n];
  
  printf("Input %d integers in one line seperate by space : ", n);
  
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  
  printf("Largest number is %d", maximum(arr, n));
  return 0;
}