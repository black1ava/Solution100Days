#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void intro(){
   printf("input 1: to delete any character from the text\ninput2 : all characters are lowercase\ninput 3 : all characters are uppercase\ninput 4: exit the program.\nPlease choose an option : ");
}

int main(){
  FILE *filePointer;
  
  char fileName[100], singleLine[100], newSingleLine[100];
  int menu, length, index = 0, count = 0;
  char chr[2], ch;
  printf("Input your file name: ");
  scanf("%s", fileName);
  
  intro();
  scanf("%d", &menu);
  
  switch(menu){
    
    case 0 :
      exit(0);
      break;
      
    case 1 :
    printf("Input a character you want to remove : ");
    scanf("%s", chr);
    
    filePointer = fopen(fileName, "r+");
    
    while(!feof(filePointer)){
      
      fgets(singleLine, 100, filePointer);
      int length = strlen(singleLine);
      
      for(int i = 0; i < length; i++){
        if(singleLine[i] != chr[0]){
          newSingleLine[index] = singleLine[i];
          index++;
        }
      }
    }
    
    rewind(filePointer);
    fprintf(filePointer, "%s", newSingleLine);
    
    break;
  case 2 :
  
    filePointer = fopen(fileName, "r+");
    
    while(!feof(filePointer)){
      
      fgets(singleLine, 100, filePointer);
      int length = strlen(singleLine);
      
      for(int i = 0; i < length; i++){
        if(singleLine[i] != '\n'){
          ch = tolower(singleLine[i]);
          newSingleLine[index] = ch;
          index++;
        }
      }
    }
    
    rewind(filePointer);
    fprintf(filePointer, "%s", newSingleLine);
    
    break;
  case 3 :
  
    filePointer = fopen(fileName, "r+");
    
    while(!feof(filePointer)){
      
      fgets(singleLine, 100, filePointer);
      int length = strlen(singleLine);
      
      for(int i = 0; i < length; i++){
        if(singleLine[i] != '\n'){
          ch = toupper(singleLine[i]);
          newSingleLine[index] = ch;
          index++;
        }
      }
    }
    
    rewind(filePointer);
    fprintf(filePointer, "%s", newSingleLine);
    
    break;
  case 4 :
  
    filePointer = fopen(fileName, "r");
    while(!feof(filePointer)){
      
      fgets(singleLine, 100, filePointer);
      count += strlen(singleLine);
    }
    
    printf("%d", count);
    break;
  }
  
  fclose(filePointer);
  return 0;
}