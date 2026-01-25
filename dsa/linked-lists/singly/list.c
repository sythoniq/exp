#include <stdlib.h>
#include <stdio.h>

#include "list.h"
#include "node.h"

void listInit(LinkedList *list) {
  list->root = NULL;
}

void addToList(LinkedList *list, size_t value) {
  if (list->root != NULL) {
    node *curr = list->root;
    while(curr->next != NULL) {
      curr = curr->next;
    }
    
    node *n = (node *)malloc(sizeof(node));
    n->data = value;
    n->next = NULL;
    curr->next = n;
  } else {
    list->root = (node *)malloc(sizeof(node));
    list->root->data = value;
    list->root->next = NULL;
  }
}

void listPop(LinkedList *list) {
  if (list->root->next == NULL) {
    printf("I suck at C bruh, this segfaults if i try and free/make the root \
null");
  }

  node *curr = list->root;
  node *prev;
  while (curr->next != NULL) {
    prev = curr;
    curr = curr->next;
  }
  prev->next = NULL;
  free(curr);
}

void deleteList(LinkedList *list) {
  if (list->root == NULL) return;

  list->root = NULL;
  free(list->root);
}
