#include <stdio.h>

int
main(void) {
  FILE *file;
  char line[1024];

  file = fopen("recipe-data.txt", "r");
  if (file == NULL) {
    fprintf(stderr, "ファイルをオープンできません: <%s>\n", "recipe-data.txt");
    return 1;
  }

  if (fgets(line, 1024, file) == NULL) {
    fprintf(stderr, "ファイルの読み込みに失敗しました: <%s>\n", "recipe-data.txt");
    return 1;
  }

  printf("%s\n", line);

  return 0;
}
