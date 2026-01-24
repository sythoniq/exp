#include <stdlib.h>
#include <stdio.h>

#include "node.h"

void main() {
  ll_node root;
  ll_node node;
  ll_node node1;

  initList(&root);
   
  addNode(&node, &root);
  addNode(&node1, &root);

  printf("%p\n%p\n", node.tail, &node1);

  deleteNode(&node1, &root);
  printf("%p\n", node.tail);
}
