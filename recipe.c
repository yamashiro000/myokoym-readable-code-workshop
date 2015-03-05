#include <stdio.h>

#define LINE_BUFFER 1024

int
main(int argc, char *argv[]) {
  FILE *file;
  char line[LINE_BUFFER];
  char *file_name = argv[1];

  file = fopen(file_name, "r");
  if (file == NULL) {
    fprintf(stderr, "ファイルをオープンできません: <%s>\n", file_name);
    return 1;
  }

  if (fgets(line, LINE_BUFFER, file) == NULL) {
    fprintf(stderr, "ファイルの読み込みに失敗しました: <%s>\n", file_name);
    return 1;
  }

  printf("%s\n", line);

  return 0;
}
