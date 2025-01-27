#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int data;
  struct Node* next;
}Node;
Node* createStack(){
  return NULL;
}
void push(Node** stackTop, int n){
  Node* newNode = (Node*) malloc(sizeof(Node));
    if(newNode == NULL) return ;
  newNode->data = n;
  newNode->next = *stackTop;
  *stackTop = newNode;       
}
void pop(Node** stackTop){
  if(*stackTop == NULL) return ;
  Node* temp = *stackTop;
  *stackTop = temp->next;
  free(temp);
}
void printStack(Node** stackTop){
  Node* stackTemp = *stackTop;
  do{
    printf("|%d|\n",stackTemp->data);
    stackTemp = stackTemp->next;
  }while(stackTemp!=NULL);
}
void deleteStack(Node** stackTop){
    while(stackTop!=NULL){
      Node* stackTemp = *stackTop;
      *stackTop = stackTemp->next;
      free(stackTemp);
    }
}
int main(){
  Node* stack = createStack();
  push(&stack,5);
  push(&stack,5);
  pop(&stack);//-------- POP
  push(&stack,4);
  push(&stack,3);
  push(&stack,2);
  push(&stack,1);
  printStack(&stack);
  deleteStack(&stack);
  return 0;
}