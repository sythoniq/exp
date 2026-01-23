#include <stdio.h>
#include <stdlib.h>
#include "arr.h"

void main() {
  dy_arr arr;
  initArr(&arr);

  arr_add(&arr, 1);
  arr_add(&arr, 10);
  printf("Curr arr count: %d\n", arr.count);

  arr_pop(&arr);
  printf("Curr arr count: %d\n", arr.count);
  for (size_t i = 0; i < arr.count; i++) {
    printf("Element at %d: %d", i, arr.elements[i]);
  }
}
