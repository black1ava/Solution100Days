#include<stdio.h> //time complexity O(n)
#include<stdlib.h>
#include<limits.h>

#define L 6
int max = INT_MIN;

typedef struct node {
  
  int data;
  struct node *next;
  
} node;

node *insert(int k){
  
  node *temp = (node *)malloc(sizeof(node));
  temp -> data = k;
  
  return temp;
}

node *addToHead(node **head, node *temp){
  
  temp -> next = *head;
  *head = temp;
  
  return *head;
}

void maximum(node *node){
  
  if(node != NULL){
    
    if(node -> data > max){
      max = node -> data;
      
    }
    
    maximum(node -> next);
  }
}

int main(){
  
  node *head = NULL;
  node *temp;
  
  int n;
  
  printf("Input 6 integers in one line seperate by space : ");
  
  for(int i = 0; i < L; i++){
    
    scanf("%d", &n);
    temp = insert(n);
    
    addToHead(&head, temp);
  }
  
  maximum(head);
  
  printf("Largest number is %d", max);
  
  return 0;
}