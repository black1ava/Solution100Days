#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

int time = 100;

bool checkRepeatedChar(char *str){

  for(int i = 0; i < strlen(str) - 1; i++){
    if(str[i] == str[i + 1]){
      return true;
    }
  }

  return false;
}

char *noRepeatedChar(char ch, int index, char *str){
  int i;
  for(i = index + 1; i < strlen(str); i++){
    if(str[i] != ch){
      break;
    }
  }

  char temp = str[index];
  str[index] = str[i];
  str[i] = temp;

  return str;
}

char *reverseString(char *str){
  char *reverseStr = (char *)malloc(strlen(str));
  for(int i = 0; i < strlen(str); i++){
    reverseStr[i] = str[strlen(str) - i - 1];
  }

  return reverseStr;
}

char *replaceRepeatedChar(char *str, int limit){
  if(limit > 0){
    for(int i = 0; i < strlen(str) - 2; i++){
      if(str[i] == str[i + 1]){
        str = noRepeatedChar(str[i + 1], i + 1, str);
      }
    }

    if(!checkRepeatedChar(str)){
      return str;
    }

    str = reverseString(str);
    return replaceRepeatedChar(str, limit - 1);
  }

  return "This string cannot be changed";
}

int main(){
  char *str = (char *)malloc(100);
  printf("Input a string: ");
  scanf("%s", str);
  
  if(checkRepeatedChar(str)){
    str = replaceRepeatedChar(str, time);
    printf("%s", str);
  }else{
    printf("%s", str);
  }

  return 0;
}