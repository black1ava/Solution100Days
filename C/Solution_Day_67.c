#include<stdio.h>

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
  divide(a, b, &result);
  printf("%d ÷ %d = %d", a, b, result);
  return 0;
}