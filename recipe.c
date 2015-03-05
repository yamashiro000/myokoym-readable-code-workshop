#include <stdio.h>

int
main(void) {
  FILE *file;
  char line[1024];

  file = fopen("recipe-data.txt", "r");
  if (file == NULL) {
    return 1;
  }

  if (fgets(line, 1024, file) == NULL) {
    return 1;
  }

  printf("%s\n", line);

  return 0;
}
