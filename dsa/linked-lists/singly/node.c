#include "node.h"

void initList(ll_node* node) {
  // Declare root node only.
  
  node->tail = NULL;
  node->data = 0;
}

void addNode(ll_node *node, ll_node *root) {
  ll_node* curr = root;
  while (curr->tail != NULL) {
    curr = curr->tail;
  }
  curr->tail = node;
}

void deleteNode(ll_node *node, ll_node* root) {
  ll_node* curr = root;
  while (curr->tail != node) {
    curr = curr->tail;
  }
  if (node->tail == NULL) {
    curr->tail = NULL;
    return;
  }
  curr->tail = node->tail;
}
