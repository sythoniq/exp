#ifndef node_h
#define node_h

#include <stdlib.h>

typedef struct {
  void *next;
  size_t data;
} node;

#endif
