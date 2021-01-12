#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Grade {
  float average;
  char grade[3];
} Grade;

//Global Declaration

Grade grade[7] = {
  {85, "A"}, 
  {80, "B+"},
  {70, "B"},
  {65, "C+"},
  {60, "C"},
  {30, "F1"},
  {0, "F2"}
};

char *yourGrade(float average){
  
  for(int i = 0; i < 7; i++){
    
    if(average >= grade[i].average){
      return grade[i].grade;
    }
    
  }
}

int main(){
  char name[50], *yourName;
  float average;
  
  printf("Input student's name: ");
  gets(name);
  yourName = (char *)malloc(strlen(name));
  strcpy(yourName, name);
  
  printf("Input student's average : ");
  scanf("%f", &average);
  
  if(average >= 0 && average <= 100){
    printf("Hello! %s. Your average is %.2f. You got grade %s", yourName, average, yourGrade(average));
  }else{
    printf("Invalid Input");
  }
  
  free(yourName);
  
  return 0;
}