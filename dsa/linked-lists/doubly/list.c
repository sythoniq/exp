#include "list.h"
#include "node.h"

#include <stdlib.h>
#include <stdio.h>

void listInit(List *list) {
  list->root = NULL;
}

void append(List *list, size_t value) {
  if (list->root == NULL) {
    list->root = malloc(sizeof(Node));
    list->root->head = NULL;
    list->root->data = value;
    list->root->tail = NULL;
  }

  int res = listGet(list, value);
  if (res == 1) return;

  Node *curr = list->root;
  Node *prev;

  while (curr->tail != NULL) {
    curr = curr->tail;
  }

  Node *n = malloc(sizeof(Node));
  curr->tail = n;
  n->data = value;
  n->tail = NULL;
  n->head = curr;
}

int listGet(List *list, size_t value) {
  if (list->root == NULL) return 0;   

  Node* curr = list->root;
  while (curr->data != value && curr->tail != NULL) {
    curr = curr->tail;
  }

  if (curr->data != value) return 0;

  return 1; 
}
