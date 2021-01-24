#include<iostream>

using namespace std;

class Node{
  public :
    int data;
    Node *next;
};

Node *addNode(Node *head, int key){
  Node *temp = new Node();
  temp -> data = key;
  temp -> next = head;
  head = temp;
  
  return head;
}

Node *deleteNode(Node *head, int k){
  if(head != NULL){
    if(head -> data == k){
      Node *temp = head -> next;
      return temp;
    }
    if(head -> next -> data == k){
      head -> next  = head -> next -> next;
      return head;
    }
    
    head -> next = deleteNode(head -> next, k);
    return head;
  }
  return head;
}

void showNode(Node *head){
  if(head != NULL){
    cout << head -> data << " ";
    showNode(head -> next);
  }
}

int main(){
  Node *test = new Node();
  test = NULL;
  
  for(int i = 2; i <= 100; i++){
    test = addNode(test, i);
  }
  
  for(int i = 2; i <= 100; i++){
    for(int j = 2; j <= 50; j++){
      if(i != j && i > j && i % j == 0){
        test = deleteNode(test, i);
        break;
      }
    }
  }
  
  showNode(test);
  
  return 0;
}