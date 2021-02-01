#include<stdio.h>

void head(){
  for(int i = 1; i <= 10; i++){
    printf("%4d", i);
  }
}

void line(){
  for(int i = 0; i < 22; i++){
    printf("--");
  }
}

int main(){
  printf("   ");
  head();
  printf("\n");
  line();
  printf("\n");
  for(int i = 1; i <= 10; i++){
    printf("%d", i);
    if(i < 10){
      printf("  ");
    }else{
      printf(" ");
    }
    for(int j = 1; j <= 10; j++){
      printf("%4d", i * j);
    }
    printf("\n");
  }
  return 0;
}