#include <stdio.h>

#define LINE_BUFFER_SIZE 1024

int
main(int argc, char *argv[]) {
  FILE *file;
  char line[LINE_BUFFER_SIZE];
  char *file_name = argv[1];
  int recipe_id = 0;

  file = fopen(file_name, "r");
  if (file == NULL) {
    fprintf(stderr, "ファイルをオープンできません: <%s>\n", file_name);
    return 1;
  }

  while (fgets(line, LINE_BUFFER_SIZE, file) != NULL) {
    printf("%d: %s", ++recipe_id, line);
  }

  return 0;
}
