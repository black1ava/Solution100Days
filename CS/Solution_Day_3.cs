using System;
using System.Collections.Generic;

namespace CS{
	class Program{
		public static void Main(string[] args){
			LinkedList<int> root = new LinkedList<int>();
			
			for(int i = 2; i <= 100; i++){
				root.AddFirst(i);
			}
			
			for(int i = 2; i <= 100; i++){
				for(int j = 2; j <= 50; j++){
					if(i != j && i > j && i % j == 0){
						root.Remove(i);
					}
				}
			}
			
			foreach(int node in root){
				Console.Write("{0} ", node);
			}
		}
	}
}