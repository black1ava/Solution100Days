#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct {
  int start, end;
} interval;

bool overlap(interval room1, interval room2){
  if((room2.end >= room1.start && room2.end <= room1.end) || (room1.end >= room2.start && room1.end <= room2.end)){
      return true;
  }
  return false;
}

int roomAcquired(interval list[], int length){
  int count = 0;
  for(int i = 0; i < length; i++){
    for(int j = i + 1; j < length; j++){
      if(!overlap(list[i], list[j])){
        count++;
      }
    }
  }
  return count + 1;
}

int main(){
  
  interval list[] = {{30, 75}, {0, 50}, {60, 150}};
  int length = sizeof(list) / sizeof(list[0]);
  int rooms = roomAcquired(list, length);
  printf("%d", rooms);
  return 0;
}