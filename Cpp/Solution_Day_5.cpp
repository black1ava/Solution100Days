#include<bits/stdc++.h>
using namespace std;

bool checkRepeatedChar(string str){
  for(int i = 0; i < str.length(); i++){
    if(str[i] == str[i + 1]){
      return true;
    }
  }

  return false;
}

string noRepeatedChar(char ch, int index, string str){
  int i;
  for(i = index + 1; i < str.length(); i++){
    if(str[i] != ch){
      break;
    }
  }

  char temp = str[index];
  str[index] = str[i];
  str[i] = temp;

  return str;
}

string reverseString(string str){
  int length = str.length();

  for(int i = 0; i < length / 2; i++){
    swap(str[i], str[length - i - 1]);
  }

  return str;
}

string replaceRepeatedChar(string str, int time = 100){
  if(time){
    for(int i = 0; i < str.length() - 2; i++){
      if(str[i] == str[i + 1]){
        str = noRepeatedChar(str[i + 1], i + 1, str);
      }
    }

    if(!checkRepeatedChar(str)){
      return str;
    }

    str = reverseString(str);
    return replaceRepeatedChar(str, time - 1);
  }

  return "This string cannot be changed";
}

int main(){
  string str;
  cout << "Input a string: ";
  cin >> str;
  
  if(checkRepeatedChar(str)){
    str = replaceRepeatedChar(str);
    cout << str;
  }else{
    cout << str;
  }

  return 0;
}