#include "node.h"

void initList(ll_node* node) {
  // Declare root node only.
  
  node->tail = NULL;
  node->data = 0;
}

void addNode(ll_node *node, ll_node *prev_node) {
  prev_node->tail = node;  
}
