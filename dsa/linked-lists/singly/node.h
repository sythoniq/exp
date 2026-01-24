#ifndef node_h
#define node_h

#include <stdlib.h>

typedef struct {
  void *tail;
  size_t data;
} ll_node;

void initList(ll_node* node);
void addNode(ll_node* node, ll_node *root);
void deleteNode(ll_node* node, ll_node* root);

#endif
