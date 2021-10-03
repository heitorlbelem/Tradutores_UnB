#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "scope_stack.h"


void push_scope(int top, int scope_id, int scope_stack[]) {
  scope_stack[top] = scope_id;
  // print_scope_stack(top, scope_stack);
  return;
}

void pop_scope(int top, int scope_stack[]) {
  scope_stack[top] = -1;
  // print_scope_stack(top, scope_stack);
  return;
}

void initialize_scope_stack(int scope_stack[]) {
  scope_stack[0] = 0;
  for(int i = 1; i < 100000; i++) {
    scope_stack[i] = -1;
  }
  return;
}

void print_scope_stack(int top, int scope_stack[]) {
  for(int i = top; i >= 0; i--) {
    if(scope_stack[i] != -1) printf("%d\t", scope_stack[i]);
  }
  printf("\n");
  return;
}