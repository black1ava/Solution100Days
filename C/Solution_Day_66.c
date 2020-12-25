#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
  int data;
  struct node *next;
} node;

node *addNode(node **head, int k){
  node *temp = (node*)malloc(sizeof(node));
  
  temp -> data = k;
  temp -> next = *head;
  *head = temp;
  
  return *head;
}

bool compare(node *node1, node *node2){
  
  while(node1 != NULL && node2 != NULL){
    if(node1 -> data != node2 -> data){
      return false;
    }
    
    node1 = node1 -> next;
    node2 = node2 -> next;
    
  }
  
  return true;
}

bool palindrome(node *head){
  
  node *reverseHead = NULL;
  node *temp = head;
  
  while(temp != NULL){
    
    addNode(&reverseHead, temp -> data);
    temp = temp -> next;
    
  }
  
  return compare(head, reverseHead);
}

int main(){
  int n, k;
  node *head = NULL;
  
  printf("How many number in a list: ");
  scanf("%d", &n);
  
  printf("Input all number in a single line seperate by space: ");
  
  for(int i = 0; i < n; i++){
    scanf("%d", &k);
    addNode(&head, k);
  }
  
  if(palindrome(head)){
    printf("True");
  }else{
    printf("False");
  }
  
  return 0;
}