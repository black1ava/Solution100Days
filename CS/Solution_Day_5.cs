using System;

namespace CSharp{
  class Program{

    public static string reverseString(string str){
      char[] charArr = str.ToCharArray();
      Array.Reverse(charArr);

      return new string(charArr);
    }
    public static string noRepeatedChar(char ch, int index, string str){
      int i;
      for(i = index + 1; i < str.Length; i++){
        if(str[i] != ch){
          break;
        }
      }

      char[] charArr = str.ToCharArray();
      
      char temp = charArr[index];
      charArr[index] = charArr[i];
      charArr[i] = temp;

      string newStr = new string(charArr);

      return newStr;
    }
    public static string replaceRepeatedChar(string str, int time = 100){
      if(time != 0){
        for(int i = 0; i < str.Length - 2; i++){
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

      return "It cannot be changed";
    }
    public static bool checkRepeatedChar(string str){
      for(int i = 0; i < str.Length - 1; i++){
        if(str[i] == str[i + 1]){
          return true;
        }
      }
      return false;
    }
    public static void Main(string[] args){
      Console.Write("Input a string: ");
      string str = Console.ReadLine();
      if(checkRepeatedChar(str)){
        str = replaceRepeatedChar(str);
        Console.WriteLine(str);
      }else{
        Console.WriteLine(str);
      }
    }
  }
}