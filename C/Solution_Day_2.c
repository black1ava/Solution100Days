#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node {
  int data;
  struct node *left, *right;
} node;

node *addNode(int k){
  node *temp = (node *)malloc(sizeof(node));
  
  temp -> data = k;
  temp -> left = NULL;
  temp -> right = NULL;
  
  return temp;
}

bool match(node *node, int key){
  if(node == NULL){
    return true;
  }
  
  return node -> data == key && match(node -> left, key) && match(node -> right, key);
}

bool matching(node *node){
  int key = node -> data;
  
  return match(node, key);
}

void check(node *node, int *count){
  if(node == NULL){
    return;
  }
  
  if(matching(node)){
    (*count)++;
  }
  
  check(node -> left, count);
  check(node -> right, count);
}

int start(node *node){
  int count = 0;
  
  check(node, &count);
  
  return count;
}

int main(){
  node *root = NULL;
  
  root = addNode(1);
  root -> left = addNode(1);
  root -> right = addNode(0);
  root -> left -> left = addNode(1);
  root -> left -> right = addNode(1);
  root -> right -> left = addNode(0);
  root -> right -> right = addNode(1);
  
  printf("%d", start(root));
  return 0;
}

