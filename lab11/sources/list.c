#include <stdio.h>
#include <stdlib.h>
#include "../headers/node.h"

// Define 'list' using typedef and struct.

list* init_list(){
  list *tmp_list = malloc(sizeof(list));
  tmp_list -> head = NULL;
  tmp_list -> size  = 0;
  return tmp_list;
}
void appendTo(list* list, node* newnode);
void delAt(list* list, int n);
void print_list(list* list);

node* newnode(int n){
  node* temp = (node*)malloc(sizeof(node));
  temp->val = n;
  temp->next = NULL;
  return temp;
}





int main(int argc, char const *argv[]) {
  list* linked = init_list();
  int i;
  for ( i = 1; i < 6; i++) {
    appendTo(linked,newnode(i));
  }
  print_list(linked);
  delAt(linked,-1);
  delAt(linked,0);
  print_list(linked);
  delAt(linked,3);
  print_list(linked);
  return 0;
}
