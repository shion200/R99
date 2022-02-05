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


char* str_insert(char* s1, int n, char* s2) {
    char *s3 = malloc (sizeof (char) * 100);
    int i,j,k;
    for (i = 0; i<=n; i++) {
        s3[i] = s1[i];
    }
    for (j = 0; j<=str_len(s2); j++) {
        s3[j+n+1] = s2[j];
    }
    for (k = j+n; s1[k-j+1]!='\0'; k++) {
        s3[k] = s1[k-j+1];
    }
    s3[k] = '\0';
    return s3;
}

int str_insert_test(void) {
  char s1[100] = "012345";
  return str_eql(str_insert(s1, 3, "abc"), "0123abc45");
}
int main() {
    printf("%i\n",str_insert_test());
    return 0;
}