#include <stdio.h>
#include <stdlib.h>
#include "arr.h"

void main() {
  dy_arr arr;
  initArr(&arr);

  arr_add(&arr, 1);
  arr_add(&arr, 10);
  printf("Curr arr element at 1: %d\n", arr_get(&arr, 1));
  
  arr_set(&arr, 1, 100);

  printf("Curr arr element at 1: %d\n", arr_get(&arr, 1));
}
