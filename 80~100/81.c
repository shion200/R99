#include <stdio.h>
int is_empty(char* s) {
    return s[0] == '\0';
}
int is_empty_test(void) {
  char s[] = "I am not empty";

  return is_empty("") &&
    ! is_empty(" ") &&
    ! is_empty(s);
}
int main() {
    printf("%i",is_empty_test());
}