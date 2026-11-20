#ifndef KV_H
#define KV_H

#include <stdio.h>

typedef struct {
  char *key;
  char *value;
} Kv_Entry;

typedef struct {
  size_t capacity;
  size_t count;
  Kv_Entry *entries;
} Kv_Table;

Kv_Table *kv_init(size_t capacity);

#endif
