#include "mylib.h"

#include <stdio.h>

void hello() {
  printf("Hello world from mylib\n");
}

unsigned add(unsigned a, unsigned b) {
  return a + b;
}

void echo(const char* str) {
  printf("> mylib: %s\n", str);
}

void call_cb(void (*cb) (const char* str)) {
  cb("hi again!");
}
