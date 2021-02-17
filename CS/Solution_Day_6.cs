using System;

namespace CSharp{
  class Program{

    struct Line{
      int y0, y1; //Assume that y0 and y1 are the plots that run on line y = 0 and y = 1
    }

    public static void Main(string[] args){
      int n; //n is number of lines;
      Console.Write("Input a number of lines: ");
      n = Convert.ToInt32(Console.ReadLine());
      
      Line[n] line;

      Console.WriteLine("Input each ");
      for(int i = 0; i < n; i++){
        int y0 = Convert.ToInt32(Console.ReadLine());
        int y1 = Convert.ToInt32(Console.ReadLine());
        line[i] = (Line){y0, y1};
      }

      for(int i = 0; i < n; i++){
        Console.WriteLine(line[i].y0 + " " + line[i].y1);
      }
    }
  }
}

