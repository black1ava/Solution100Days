#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct {
  int y0, y1; // Assume that y0 and y1 are the plots that run on line y = 0 and y = 1, respectively
} Line;

int count = 0;

bool isIntersected(Line a, Line b){
    if(a.y0 <= b.y0){
      if(a.y1 <= b.y1){
        return false;
      }

      return true;
    }

    return isIntersected(b, a);
}

void intersectSegment(Line *pairPlot, int n, int index){
  if(index < n - 1){
    for(int i = index + 1; i < n; i++){
      if(isIntersected(pairPlot[index], pairPlot[i])){
        count++;
      }
    }

    intersectSegment(pairPlot, n, index + 1);
  }
}

int main(){
  int n; // n is a number of plot pairs

  printf("Number of Lines: ");
  scanf("%d", &n);

  Line *plotPairs = (Line *)calloc(n, sizeof(Line));

  printf("Input each plot seperate by space: \n");

  int y0, y1;

  for(int i = 0; i < n; i++){
    printf("Pair %d: ", i + 1);

  scanf("%d%d", &y0, &y1);

  plotPairs[i] = (Line){y0, y1};
  }

  intersectSegment(plotPairs, n, 0);
  printf("%d\n", count);
  return 0;
}