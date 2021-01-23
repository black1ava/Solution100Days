#include<stdio.h>

int main(){
  char gender;
  
  printf("Input your gender (m/f) : ");
  scanf("%c", &gender);
  
  if((int)(gender) != 70 && (int)(gender) != 77){
    gender -= 32;
  }
  
  switch(gender){
    case 'M' :
      printf("Male");
      break;
    case 'F' :
      printf("Female");
      break;
    default :
      printf("Invalid Input");
  }
  
  return 0;
}