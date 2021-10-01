#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "scope_stack.h"

int scope_stack[30];

void push_scope(int top, int scope_id) {
  printf("PUSH: %d\n", scope_id);
  scope_stack[top] = scope_id;
  print_scope_stack(top);
  return;
}

void pop_scope(int top) {
  printf("POP: %d\n", scope_stack[top]);
  scope_stack[top] = -1;
  print_scope_stack(top);
  return;
}

void initialize_scope_stack() {
  scope_stack[0] = 0;
  for(int i = 1; i < 30; i++) {
    scope_stack[i] = -1;
  }
  return;
}

void print_scope_stack(int top) {
  for(int i = top; i >= 0; i--) {
    if(scope_stack[i] != -1) printf("%d\t", scope_stack[i]);
  }
  printf("\n");
  return;
}