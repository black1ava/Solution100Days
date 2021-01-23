using System;

namespace MyApp{
	class Program{
		
		static void Main(){
			Console.Write("Numbers in an array : ");
			int n = Convert.ToInt32(Console.ReadLine());
			Console.Write("Input {n} numbers seperate by space : ");
			string[] str = Console.ReadLine().Split(' ');
			Console.Write("Input a k number : ");
			int k = Convert.ToInt16(Console.ReadLine());
			int[] arr = new int[n];
			for(int i = 0; i < n; i++){
				arr[i] = Int32.Parse(str[i]);
			}
			
			Console.WriteLine(AlwaysTrue(arr, k));
		}
		
		static bool AlwaysTrue(int[] array, int num){
			foreach(int element1 in array){
				foreach(int element2 in array){
					if(element1 != element2){
						if(element1 + element2 == num){
							return true;
						}
					}
				}
			}
			return false;
		}
	}
}