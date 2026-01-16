#include <stdio.h>

#include "hash_table.h"
#include "hash_table.c"

int main() {
  ht_hash_table* ht = ht_new();
  printf("%d\n", ht->size);
  ht_del_hash_table(ht);
}
