#include <kv.h>
#include <stdlib.h>

Kv_Table *kv_init(size_t capacity) {
  if (capacity == 0) return NULL;

  Kv_Table *table = malloc(sizeof(Kv_Table));

  if (table == NULL) return NULL;

  table->capacity = capacity;
  table->count = 0;

  table->entries = calloc(sizeof(Kv_Entry), capacity);
  if (table->entries == NULL) return NULL;

  return table;
}


