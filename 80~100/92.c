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

char *toUpper(char* s) {
    char lower[100] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    char upper[100] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char *ans = malloc(sizeof (char) * 100);
    int i = 0;  
    int judge;
    for (i; s[i]!='\0'; i++) {
        judge = 0;
        for (int j = 0; j<27; j++) {
            if(s[i] == lower[j]) {
                ans[i] = upper[j];
                judge++;
            }
        }
        if (judge < 1) {
            ans[i] = s[i];
        }
    }
    ans[i] = '\0';
    return ans;
}

int toUpper_test(void) {
  char s[] = "it's a small world";
  return str_eql(toUpper("I am small letters, ain't I?"),
                 "I AM SMALL LETTERS, AIN'T I?") &&
    str_eql(toUpper("I AM SMALL LETTERS, AIN'T I?"),
                 "I AM SMALL LETTERS, AIN'T I?") &&
    str_eql(toUpper(""), "") &&
    str_eql(toUpper("abcd123"), "ABCD123");
}
int main() {
    char s[] = "it's a small world";
    printf("%i",toUpper_test());
    return 0;
}