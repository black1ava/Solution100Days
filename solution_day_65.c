#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool findPairs(char word1[], char word2[], int length){
  int count = 0;
  for(int i = 0; i < length; i++){
    if(word1[i] == word2[length - i - 1]){
      count++;
    }
  }
  return count == length ? true : false;
}

int main(){
  char words[][100] = {"code", "edoc", "da", "d"};
  int length = sizeof(words) / sizeof(words[0]);
  for(int i = 0; i < length; i++){
    for(int j = 0; j < length; j++){
      int length1 = strlen(words[i]);
      int length2 = strlen(words[j]);
      if(i != j){
        if((length1 == length2) || (length1 == length2 + 1)){
          if(findPairs(words[i], words[j], (int)strlen(words[j]))){
            printf("%d, %d\n", i, j);
          }
        }
      }
    }
  }
  return 0;
}