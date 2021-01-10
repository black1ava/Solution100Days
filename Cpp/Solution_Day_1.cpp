#include<iostream>
using namespace std;

bool addUp(int arr[], int n, int k){
  for(int i = 0; i < n; i++){
    
    for(int j = 0; j < n; j++){
      if(arr[i] + arr[j] == k){
        return true;
      }
    }
    
  }
  
  return false;
}

int main(){
  int n, k;
  cout << "Amount of elements: ";
  cin >> n;
  
  int arr[n];
  cout << "Input all numbers in one line seperate by space : ";
  
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  
  cout << "Input a number k : ";
  cin >> k;
  
  if(addUp(arr, n, k)){
    cout << "True";
  }else{
    cout << "False";
  }
  
  return 0;
}