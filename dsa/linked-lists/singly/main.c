#include <stdlib.h>
#include <stdio.h>

#include "node.h"
#include "list.h"

void main() {
  LinkedList list;
  listInit(&list);

  addToList(&list, 10);

  listPop(&list);
}
