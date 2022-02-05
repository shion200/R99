#include <stdio.h>
int str_len(char* s) {
    int i = 0;
    int sum = 0;
    for (i; s[i] != '\0'; i++) {
        sum++;
    }
    return sum;
}

int str_eql_n(char* s1, char* s2, int n) {
    if (str_len(s1) < n || str_len(s2) < n) {
        return 0;
    }
    if (s1[n-1] == s2[n-1]) {
        return 1;
    }
    return 0;
}
int str_eql_n_test(void) {
  char* s  = "I am a string. equal to myself";
  char* s1 = "12345 same first 6";
  char* s2 = "12345 differ after 6";

  return str_eql_n("", "", 0) &&
    ! str_eql_n("a",   "b",   1) &&
      str_eql_n("abc", "abc", 3) &&
      str_eql_n(s,  s, 10) &&
    ! str_eql_n(s,  s, 100) &&
      str_eql_n(s1, s2, 6) &&
    ! str_eql_n(s1, s2, 10);
}
int main() {
    printf("%i",str_eql_n_test());
}