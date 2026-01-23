#ifndef arr_h
#define arr_h

#include <stdlib.h>

typedef struct {
  int size;
  int count;
  size_t *elements;
} dy_arr;

int *grow_array(dy_arr* pointer, int oldSize);

void initArr(dy_arr *arr);
void arr_add(dy_arr *arr, size_t ele);
void arr_pop(dy_arr *arr);
size_t arr_get(dy_arr *arr, int index);
void arr_set(dy_arr *arr, int index, size_t ele);
void free_arr(dy_arr *arr);


#endif
