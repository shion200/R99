#include <stdio.h>
#include <stdlib.h>

void n_cat(char *fname) {
  char word[100];
  int num = 1;
  FILE *fp = fopen(fname, "r");
  if ((fp = fopen(fname, "r")) == NULL) {
      exit(1);
  }

  while (fscanf(fp, "%s", word) == 1) {
      printf("%d ", num);
      printf("%s\n", word);
      num++;
  }
  fclose(fp);
}
int n_cat_test(void) {
  n_cat("numbers.txt");
  return 1;
}
int main() {
  printf("%i",n_cat_test());
  return 0;
}
