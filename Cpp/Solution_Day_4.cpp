#include<iostream>
using namespace std;

int pairPos(string str, char ch, int pos){
  pos++;
  for(; pos< str.length(); pos++){
    if(str[pos] == ch){
      break;
    }
  }
  return pos;
}

int mvTime(string str, int *mv){
  for(int i = 0; i < str.length(); i += 2){
    if(str[i] != str[i + 1]){
      int pair = pairPos(str, str[i], i);
      char temp = str[i + 1];
      str[i + 1] = str[pair];
      str[pair] = temp;
      (*mv)++;
    }
  }
  return *mv;
}

int main(){
  string people = "abcbac";
  int move = 0;
  mvTime(people, &move);
  cout << move;
  return 0;
}