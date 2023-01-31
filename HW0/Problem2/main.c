#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "fsm.h"


int main(int argc, char *argv[]) {
  assert(argc == 2);

  char *line = NULL;

  FILE *file = fopen(argv[1], "r");

  assert(file != NULL);

  f_type f = init();

  while(getline(&line, NULL, file) != EOF) {
    int next_val = atoi(line);
    f = (f_type)f(next_val);
  }

}
