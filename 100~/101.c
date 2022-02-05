#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int str_len(char* s) {
    int i = 0;
    int sum = 0;
    for (i; s[i] != '\0'; i++) {
        sum++;
    }
    return sum;
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

// char * int_to_str(int n) {
//     static char ans[100];
//     int j=0;
//     int num = '0';
//     if (n == 0) {
//         ans[0] = 0+num;
//         ans[1] = '\0';
//         return ans;
//     }
//     for (int i = n; i>0; i/=10) {
//         ans[j] = i%10 + num;
//         j++;
//     }
//     ans[j] = '\0';
//     return str_reverse(ans);
// }
char * int_to_str(int n) {
    static char ans[100];
    int i;
    int num = '0';
    for (i = 0; ; i++) {
        if (n<10) {
            ans[i] = n + num;
            ans[i+1] = '\0';
            return str_reverse(ans);
        }
        ans[i] = num + n%10;
        n/=10;
    }
    
}

int int_to_str_test(void) {
  return str_eql(int_to_str(0),"0") &&
    str_eql(int_to_str(12345), "12345") &&
    str_eql(int_to_str(12340), "12340") &&
    str_eql(int_to_str(12045), "12045");
}
int main() {
    printf("%d",int_to_str_test());
    return 0;
}