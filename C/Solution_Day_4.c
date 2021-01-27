#include<stdio.h>
#include<string.h>

int pairPos(char *arr, int len, char tar, int pos){
  for(pos++; pos < len; pos++){
    if(arr[pos] == tar){
      break;
    }
  }
  return pos;
}

int mvTime(char *arr, int len, int *mv){
  int pair;
  char temp;
  for(int i = 0; i < len; i += 2){
    if(arr[i] != arr[i + 1]){
      pair = pairPos(arr, len, arr[i], i);
      temp = arr[i + 1];
      arr[i + 1] = arr[pair];
      arr[pair] = temp;
      (*mv)++;
    }
  }
  return *mv;
}

int main(){
  char people[] = "abcbac";
  
  int move = 0;
  mvTime(people, strlen(people), &move);
  
  printf("%d", move);
  return 0;
}