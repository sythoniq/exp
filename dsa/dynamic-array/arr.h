#ifndef arr_h
#define arr_h

#include <stdlib.h>

typedef struct {
  int size;
  int count;
  size_t *elements;
} dy_arr;

void initArr(dy_arr *arr);
void arr_add(dy_arr *arr, size_t ele);
int *grow_array(dy_arr* pointer, int oldSize);


#endif
