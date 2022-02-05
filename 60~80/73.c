#include <stdio.h>
#include <stdlib.h>

void cat(char *fname) {
  char word[100];
  FILE *fp = fopen(fname, "r");
  
  if ((fp = fopen(fname, "r")) == NULL) {
  exit(1);
  }
  while (fscanf(fp, "%s", word) == 1) {
  printf("%s\n", word);
  }
  fclose(fp);
}

int cat_test(void) {
  cat("numbers.txt");
  return 1;
}
int main() {
  printf("%i",cat_test());
}