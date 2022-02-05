#include <stdio.h>
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

char* str_append(char* s1, char* s2) {
  int a = str_len(s1);
  int i;
  for (i=0; s2[i] !='\0'; i++) {
    s1[a+i] = s2[i];
  }
  s1[a+i] = '\0';
  return s1;
}

int str_append_test(void) {
  char s1[100] = "abc";
  char s2[100];
  s2[0] = '\0';

  str_append(s1, "def");
  return str_eql(s1, "abcdef") &&
    str_eql(str_append(s1, "012"),"abcdef012") &&
    str_eql(str_append(s2, "xyz"), "xyz") &&
    str_eql(str_append(s2, ""), "xyz");
}
int main() {
    printf("%i",str_append_test());
    return 0;
}