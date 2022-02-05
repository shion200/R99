#include <stdio.h>
#include <stdlib.h>
int str_len(char* s) {
    int i = 0;
    int sum = 0;
    for (i; s[i] != '\0'; i++) {
        sum++;
    }
    return sum;
}

int str_eql(char* s1, char* s2) {
    int judge = str_len(s1);
    if (judge > str_len(s2)) {
        judge = str_len(s2);
    }
    for (int i = 0; i <= judge; i++) {
        if (s1[i] != s2[i]) {
            return 0;
        }
    }
    return 1;
}

char * str_copy(char* s2, char* s1) {
  int a = str_len(s1);
  int i; 

  for (i = 0; i<a; i++) {
   s2[i] = s1[i];
  }
  s2[i] ='\0';
  return s2;
}
int str_copy_test(void) {
  char s1[] = "nice to meet you";
  char s2[BUFSIZ];
  str_copy(s2, s1);
  return str_eql(s2, "nice to meet you") &&
    str_eql(str_copy(s2, "hello"), "hello") &&
    str_eql(str_copy(s2, s1), s1) &&
    str_eql(str_copy(s2, s2), s2) &&
    str_eql(str_copy(s2,""), "") &&
    str_eql(s1, str_copy(s2, s1));
}

int main() {
    printf("%i",str_copy_test());
}