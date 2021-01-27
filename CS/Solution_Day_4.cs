using System;

namespace CS{
	class Program{
		public static int pairPos(char []str, char ch, int pos){
			pos++;
			for(; pos < str.Length; pos++){
				if(str[pos] == ch){
					break;
				}
			}
			return pos;
		}
		public static int mvTime(char[] str){
			int mv = 0;
			for(int i = 0; i < str.Length; i += 2){
				if(str[i] != str[i + 1]){
					int pair = pairPos(str, str[i], i);
					char temp = str[i + 1];
					str[i + 1] = str[pair];
					str[pair] = temp;
					mv++;
				}
			}
			return mv;
		}
		public static void Main(string[] args){
			char[] people = "abcbac".ToCharArray();
			int move = mvTime(people);
			Console.WriteLine(move);
		}
	}
}