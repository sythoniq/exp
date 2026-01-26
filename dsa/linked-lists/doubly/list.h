#ifndef list_h
#define list_h

#include "node.h"

typedef struct {
  Node *root;
} List;

void listInit(List* list);
int listGet(List* list, size_t value);
void append(List* list, size_t value);
void pop(List *list);
void deleteList(List *list);

#endif
