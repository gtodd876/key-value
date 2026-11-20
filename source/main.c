#include <stdio.h>
#include <kv.h>

int main() {
  Kv_Table *table = kv_init(3);

  printf("%p\n", table);
}