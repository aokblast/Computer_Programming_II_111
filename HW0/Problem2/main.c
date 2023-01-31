#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "fsm.h"

static const size_t BUFSIZE = 255;


int main(int argc, char *argv[]) {
  assert(argc == 2);

  char line[BUFSIZE] = {0};

  FILE *file = fopen(argv[1], "r");

  assert(file != NULL);

  f_type f = init();

  while(fgets(line, BUFSIZE, file)) {
    int next_val = atoi(line);
    f = (f_type)f(next_val);
  }

}
