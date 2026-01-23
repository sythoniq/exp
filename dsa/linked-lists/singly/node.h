#ifndef node_h
#define node_h

#include <stdlib.h>

typedef struct {
  char *head;
  char *tail;
  size_t data;
} ll_node;

void initList(ll_node* node);
void addToList(char* point, ll_node* node, int index);
void deleteNode(ll_node* node);

#endif
