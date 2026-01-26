#include "list.h"
#include "node.h"

#include <stdio.h>
#include <stdlib.h>

void main() {
  List list;
  listInit(&list);

  append(&list, 10);
  append(&list, 20);
}
