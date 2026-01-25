#ifndef list_h
#define list_h

#include "node.h"

typedef struct {
  node *root;
} LinkedList;

void listInit(LinkedList *list);
void addToList(LinkedList *list, size_t value);
void removeFromList(LinkedList *list, size_t value);
void deleteList(LinkedList *list);

#endif
