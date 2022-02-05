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

char* str_reverse(char* s) {
    int a = str_len(s);
    int j = 0;
    char *ans = malloc(sizeof(char) * 100);
    for (int i = a-1; i>=0; i--) {
        ans[j] = s[i];
        j++;
    }
    ans[j] = '\0';
    return ans;
}

int str_reverse_test(void) {
  char s1[]= "abcdef";
  char s2[]= "123456";
  char *cp = str_reverse(s1);

  return str_eql(str_reverse(""), "") &&
    str_eql(str_reverse(s1), "fedcba") &&
    str_eql(str_reverse(str_reverse(s1)), "abcdef") &&
    str_eql(str_reverse(s2), "654321") &&
    str_eql(cp, "fedcba");
}

int main() {
    printf("%i",str_reverse_test());
    return 0;
}