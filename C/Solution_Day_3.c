#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} node;

node *addNode(node *head, int k){
  node *temp = (node *)malloc(sizeof(node));
  
  temp -> data = k;
  temp -> next = head;
  head = temp;
  
  return head;
}

void showNode(node *node){
  if(node != NULL){
    printf("%d ", node -> data);
    showNode(node -> next);
  }
}


node *deleteNode(node *head, int k){
  if(head != NULL){
    if(head -> data == k){
      node *temp = head -> next;
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

int main(){
  node *root = NULL;
  
  for(int i = 2; i <= 100; i++){
    root = addNode(root, i);
  }
  
  for(int i = 2; i <= 100; i++){
    for(int j = 2; j <= 50; j++){
      if(i != j && i > j && !(i % j)){
        root = deleteNode(root, i);
        break;
      }
    }
  }
  
  showNode(root);
  
  return 0;
}