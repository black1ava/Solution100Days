#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *left, *right;
} node;

node *createNewNode(int k);
node *addNode(node *node, int k);
void showNode(node *node);

int main(){
    node *test = NULL;
    
    test = addNode(test, 1);
    test = addNode(test, 3);
    test = addNode(test, 2);
    
    showNode(test);
  return 0;
}

node *createNewNode(int k){
  node *temp = (node *)malloc(sizeof(node));
  
  temp -> data = k;
  temp -> left = NULL;
  temp -> right = NULL;
  
  return temp;
}

node *addNode(node *node, int k){
  if(node == NULL){
    return createNewNode(k);
  }
  
  if(k < node -> data){
    node -> left = addNode(node -> left, k);
  }else{
    node -> right = addNode(node -> right, k);
  }
}

void showNode(node *node){
  if(node != NULL){
    showNode(node -> left);
    printf("%d ", node -> data);
    showNode(node -> right);
  }
}