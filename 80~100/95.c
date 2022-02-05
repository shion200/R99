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

char *jstr_reverse(char* s1) {
    int a = str_len(s1);
    int j = 0;
    char *ans = (char *)malloc(sizeof(char) * 100);
    //  日本語は半角の三つ分。
    for (int i = a; i>0; i-=3) {
        ans[j] = s1[i-3];
        ans[j+1] = s1[i-2];
        ans[j+2] = s1[i-1];
        j+=3;
    }
    ans[j] = '\0';
    return ans;
}
int jstr_reverse_test(void) {
  return str_eql(jstr_reverse(""),"") &&
    str_eql(jstr_reverse("おはようございます。"), "。すまいざごうよはお") &&
    str_eql(jstr_reverse(jstr_reverse("おはようございます。")), "おはようございます。");
}
int main() {
    printf("%i",jstr_reverse_test());
    return 0;
}