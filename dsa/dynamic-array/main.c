#include <stdio.h>
#include <stdlib.h>
#include "arr.h"

void main() {
  dy_arr arr;
  initArr(&arr);

  arr_add(&arr, 1);
  arr_add(&arr, 10);
  printf("Curr arr count: %d\n", arr_get(&arr, 1));
  
}
