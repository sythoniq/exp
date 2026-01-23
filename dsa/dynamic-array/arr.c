#include "arr.h"
#include <stddef.h>
#include <stdlib.h>

int *grow_array(dy_arr *pointer, int oldSize) {
  int newSize = oldSize  * 8;
  int *result = realloc(pointer, newSize);
  return result;
}

void initArr(dy_arr *arr) {
  arr->size = 2;
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

void arr_pop(dy_arr *arr) {
  for (size_t i = arr->count; i < arr->size - 1; i++) {
    arr->elements[i] = arr->elements[i + 1];
  }

  arr->count--;
}

void arr_get(dy_arr *arr, int index) {
  return arr->elements[index];
}

void arr_set(dy_arr *arr, int index, size_t ele) {
  arr->elements[index] = ele;
}
