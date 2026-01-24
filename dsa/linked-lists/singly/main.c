#include <stdlib.h>
#include <stdio.h>

#include "node.h"

void main() {
  ll_node root;
  ll_node node;

  initList(&root);
   
  addNode(&node, &root);

  printf("%p\n%p\n", root.tail, &node);
}
