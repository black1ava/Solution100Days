#include<iostream>
using namespace std;

#define N 5

//seq stands for sequence or arithmetic sequence

void seq(int index = 0){
  if(index - N){
    if(index <  N - 1){
      cout << index + 1 << "+";
    }else{
      cout << index + 1 << "=";
    }
    seq(index + 1);
  }
}

//seqRes is the result of the sequence multiplication

int seqRes(int num){
  if(num == 0){
    return 0;
  }else{
    return num + seqRes(num - 1);
  }
}

int main(){
  seq();
  cout << seqRes(N) << endl;
  return 0;
}