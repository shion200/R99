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
int str_eql_test(void) {
  char s0[] = "I am a string.";
  char s1[] = "I am a string.";
  char s2[] = "I am a string, too.";

  return str_eql("", "") &&
    str_eql("abc", "abc") &&
    ! str_eql("abc", "abcdef") &&
    ! str_eql("abcdef", "abc") &&
    str_eql(s0, s1) &&
    str_eql(s1, s1) &&
    str_eql(s2, s2) &&
    ! str_eql(s1, s2) &&
    ! str_eql(s2, s1);
}
int main(){
    printf("%i",str_eql_test());
}