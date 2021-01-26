#include<stdio.h>

int main(){
  int n;
  printf("Input line: ");
  scanf("%d", &n);
  
  /*
  *
  **
  ***
  ****
  *****
  */
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      printf("*");
    }
    printf("\n");
  }
  
  printf("\n");
  
  /*
  $
  $$
  $$$
  $$$$
  $$$$$
  */
  
  for(int i = 0; i < n; i++){
    for(int j = n; j >= i; j--){
      printf("$");
    }
    printf("\n");
  }
  
  printf("\n");
  
  /*
  1
  22
  333
  4444
  55555
  */
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      printf("%d", i + 1);
    }
    printf("\n");
  }
  return 0;
}