#include<stdio.h>

int power(int a, int b){
  if(a == 0){
    return 0;
  }else if(a == 1){
    return 1;
  }else if(b == 0){
    return 1;
  }else if(b == 1){
    return a;
  }else{
    return a * power(a, b - 1);
  }
}

int main(){
  int a, b;
  
  printf("Input a number : ");
  scanf("%d", &a);
  
  printf("Input an exponential : " );
  scanf("%d", &b);
  
  printf("%d", power(a, b));
  return 0;
}