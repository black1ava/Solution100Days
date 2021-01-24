using System;

namespace CS{
	class Program{
		public class Node{
			public int data;
			public Node left;
			public Node right;
			public Node (int key){
				data = key;
				left = right = null;
			}
		}
		public class Count{
			public int count;
		}
		public static int subTree(Node tree){
			Count ct = new Count();
			ct.count = 0;
			countSubTree(tree, ct);
			return ct.count;
		}
		public static void countSubTree(Node tree, Count ct){
			if(tree == null){
				return;
			}
			
			if(checkingSubTree(tree)){
				ct.count++;
			}
			
			countSubTree(tree.left, ct);
			countSubTree(tree.right, ct);
		}
		public static bool checkingSubTree(Node tree){
			int key = tree.data;
			
			return isSubTree(tree, key);
		}
		
		public static bool isSubTree(Node tree, int key){
			if(tree == null){
				return true;
			}
			
			return tree.data == key && isSubTree(tree.left, key) && isSubTree(tree.right, key);
		}
		public static void Main(string[] args){
			Node test = null;
			test = new Node(0);
			test.left = new Node(1);
			test.right = new Node(0);
			test.right.left = new Node(1);
			test.right.right = new Node(0);
			test.right.left.left = new Node(1);
			test.right.left.right = new Node(1);
			Console.WriteLine(subTree(test));
		}
	}
}