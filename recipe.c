#include <stdio.h>

int
main(int argc, char *argv[]) {
  FILE *file;
  char line[1024];
  char *file_name = argv[1];

  file = fopen(file_name, "r");
  if (file == NULL) {
    fprintf(stderr, "ファイルをオープンできません: <%s>\n", file_name);
    return 1;
  }

  if (fgets(line, 1024, file) == NULL) {
    fprintf(stderr, "ファイルの読み込みに失敗しました: <%s>\n", file_name);
    return 1;
  }

  printf("%s\n", line);

  return 0;
}
