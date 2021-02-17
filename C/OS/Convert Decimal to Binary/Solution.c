#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* reverse(char *str){
  char *revStr = (char*)malloc(strlen(str));
  
  for(int i = 0; i < strlen(str); i++){
    revStr[i] = str[strlen(str) - i - 1];
  }

  return revStr;
}

char *convertToBinary(int decimal, char *binary){
  if(decimal){
    char *digit = (char*)malloc(sizeof(char));
    sprintf(digit, "%d", decimal % 2);
    strcat(binary, digit);
    decimal /= 2;
    return convertToBinary(decimal, binary);
  }

  return reverse(binary);
}

int main(){
  int decimal;

  printf("Input a decimal number: ");
  scanf("%d", &decimal);

  char *binary = (char*)malloc(100);

  printf("Binary is %s\n", convertToBinary(decimal, binary));
  return 0;
}