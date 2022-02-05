#include <stdio.h>
#include <stdlib.h>
int head(void) {
    int ans;
    FILE *fp;
    char word[100];
    if ((fp = fopen("numbers.txt","r")) == NULL) {
        return 0;
        exit(1);
    }

    fscanf(fp, "%s", word);
    ans = atol(word);

    fclose(fp);
    return ans;
}
int head_test(void) {
  return head() == 6174;
}
int main() {
    printf("%i",head_test());
}