#include<bits/stdc++.h>
using namespace std;

typedef struct {
  int y0, y1; //Assume y0 and y1 are the plots that run on line y = 0 and y = 1 respectively
} Line;

bool isIntersected(Line a, Line b){
  if(a.y0 <= b.y0){
    if(a.y1 <= b. y1){
      return false;
    }

    return true;
  }

  return isIntersected(b, a);
}

int intersectSegment(Line *lines, int n, int index = 0, int count = 0){
  if(index < n){
    for(int i = index; i < n; i++){
      if(isIntersected(lines[index], lines[i])){
        count++;
      }
    }

    return intersectSegment(lines, n, index + 1, count);
  }

  return count;
}

int main(){
  int n; //n is the numbers of lines
  cout << "Input number of lines: ";
  cin >> n;

  Line *lines = (Line *)calloc(n, sizeof(Line));
  cout << "Input each plot seperate by space: " << endl;
  int y0, y1;

  for(int i = 0; i < n; i++){
    cout << "Line " << i + 1 << ": ";
    cin >> y0 >> y1;
    lines[i] = (Line){y0, y1};
  }

  cout << intersectSegment(lines, n);

  return 0;
}