#include <stdio.h>
#include <string.h>
int str_len(char* s) {
    int i = 0;
    int sum = 0;
    for (i; s[i] != '\0'; i++) {
        sum++;
    }
    return sum;
}
int str_len_test(void) {
  char s1[] = "I am a string.";
  char *s2 = "I am a pointer to a string.";

  return str_len("") == strlen("") &&
    str_len(s1) == 14 &&
    str_len(s2) == 27 &&
    str_len(s1) == strlen(s1) &&
    str_len(s2) == strlen(s2);
}
int main() {
    printf("%i",str_len_test());
}