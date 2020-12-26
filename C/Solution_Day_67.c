#include<stdio.h>
#include<stdlib.h>

int divide(int a, int b, int *result){
  if(a < b){
    return *result;
  }
  a -= b;
  (*result)++;
  return divide(a, b, result);
}

int main(){
  int a, b, result = 0;
  printf("Input 2 positive numbers seperate by space: ");
  scanf("%d%d", &a, &b);
  if(b == 0){
    printf("Error");
  }else{
    divide(abs(a), abs(b), &result);
    if(a < 0 || b < 0){
      printf("%d ÷ %d = %d", a, b, -result);
    }else{
      printf("%d ÷ %d = %d", a, b, result);
    }
  }
  
  return 0;
}