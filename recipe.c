#include <stdio.h>

int
main(void) {
  FILE *file;
  char line[1024];

  file = fopen("recipe-data.txt", "r");

  fgets(line, 1024, file);

  printf("%s\n", line);

  return 0;
}
