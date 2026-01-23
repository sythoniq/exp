#include "arr.h"
#include <stddef.h>
#include <stdlib.h>

int *grow_array(dy_arr *arr, int oldSize) {
  int newSize = oldSize * sizeof(size_t);
  arr->elements = realloc(arr->elements, newSize);
  arr->size = newSize;
}

void initArr(dy_arr *arr) {
  arr->size = 8;
  arr->count = 0;
  arr->elements = (size_t*)malloc(arr->size * sizeof(size_t));
}

void arr_add(dy_arr *arr, size_t ele) {
  if (arr->count >= arr->size) {
    grow_array(arr, arr->size);
  }

  arr->elements[arr->count] = ele;
  arr->count++;
}

void arr_pop(dy_arr *arr) {
  arr->count--;
}

size_t arr_get(dy_arr *arr, int index) {
  if (index > arr->count) return 0;
  return arr->elements[index];
}

void arr_set(dy_arr *arr, int index, size_t ele) {
  if (index > arr->count) return;
  arr->elements[index] = ele;
}

void free_arr(dy_arr *arr) {
  free(arr->elements);
}
