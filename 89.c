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

char* str_remove(char* s1, int n, int m) {
    char *s2 = malloc (sizeof (char) * 100);
    int i, j, k;
    for (i = 0; i<=n; i++) {
        s2[i] = s1[i];
    }
    if (n+m >= str_len(s1)) {
        s2[i] = '\0';
    } else {
        for (j=n+m; s1[j]!='\0'; j++) {
            s2[j-m] = s1[j];
        }
        s2[j] = '\0';
    }
    return s2;
}

int str_remove_test(void) {
  char s1[] = "0123456789";
  return str_eql(str_remove(s1, 5,3), "0123489");
}

int main() {
    printf("%i",str_remove_test());
    return 0;
}
