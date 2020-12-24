#include<stdio.h>
#include<stdbool.h>

bool addUp(int arr[], int length, int k){
  for(int i = 0; i < length; i++){
    for(int j = i + 1; j < length; j++){
      if(arr[i] + arr[j] == k){
        return true;
      }
    }
  }
  return false;
}

int main(){
  int n, k;
  printf("How many numbers in the list: ");
  scanf("%d", &n);
  int list[n];
  printf("Input all numbers in one line seperate by space: ");
  for(int i = 0; i < n; i++){
    scanf("%d", &list[i]);
  }
  printf("Input a k number: ");
  scanf("%d", &k);
  if(addUp(list, n, k)){
    printf("True");
  }else{
    printf("False");
  }
  return 0;
}