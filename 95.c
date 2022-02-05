#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
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
    wchar_t *ans = (wchar_t *)malloc(sizeof(wchar_t) * 100);
    for (int i = a-1; i>=0; i-=2) {
        ans[j] = s1[i];
        j++;
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
    char s[] = "おはようございます。";
    int a = str_len(s);
    printf("%s\n",s);
    printf("%s",jstr_reverse("おはようございます。"));
    return 0;
}