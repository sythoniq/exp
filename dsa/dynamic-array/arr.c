#include "arr.h"
#include <stddef.h>
#include <stdlib.h>

int *grow_array(dy_arr *pointer, int oldSize) {
  int newSize = oldSize  * 8;
  int *result = realloc(pointer, newSize);
  return result;
}

void initArr(dy_arr *arr) {
  arr->size = 10;
  arr->count = 0;
  arr->elements = (size_t*)malloc(arr->size * sizeof(size_t));
}

void arr_add(dy_arr *arr, size_t ele) {
  if (arr->count >= arr->size) {
    grow_array(arr, arr->size);
  }

  arr->elements[arr->count] = ele;
  arr->count++;
  arr->size++;
}
