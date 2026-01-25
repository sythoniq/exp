#include <stdlib.h>
#include <stdio.h>

#include "node.h"
#include "list.h"

void main() {
  LinkedList list;
  listInit(&list);

  addToList(&list, 10);
  addToList(&list, 20);
  addToList(&list, 30);
  addToList(&list, 40);
  removeFromList(&list, 10);  

}
