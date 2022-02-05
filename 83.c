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

int count_chars(char* s, char c) {
    int ans = 0;
    int x = str_len(s);
    for (int i = 0; i < x; i++) {
        if (s[i] == c) {
            ans++;
        }
    }
    return ans;
}
int count_chars_test(void) {
  return count_chars("", 'a') == 0 &&
    count_chars("aaa", 'a') == 3 &&
    count_chars("a a a", 'b') == 0 &&
    count_chars("a a a", 'a') == 3 &&
    count_chars("a a a", ' ') == 2;
}
int main() {
    printf("%i",count_chars_test());
}