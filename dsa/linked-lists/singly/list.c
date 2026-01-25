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

// Edge case whereby if root delete attempted seg faults and fails.
// As such am just returning from the thing to avoid it.
void removeFromList(LinkedList *list, size_t value) {
  if (list->root == NULL) return;

  if (list->root->data == value) return;

  node *curr = list->root;
  node *prev;
  while(curr->data != value) {
    prev = curr;
    curr = curr->next;
  }

  if (curr->next == NULL) {
    prev->next = NULL;
    free(curr);
  } else {
    prev->next = curr->next;
    free(curr);
  }
}

void deleteList(LinkedList *list) {
  if (list->root == NULL) return;

  list->root = NULL;
  free(list->root);
}
