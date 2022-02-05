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
int str_eql_n(char* s1, char* s2, int n) {
    if (str_len(s1) < n || str_len(s2) < n) {
        return 0;
    }
    if (s1[n-1] == s2[n-1]) {
        return 1;
    }
    return 0;
}

int str_search(char* s1, char* s2) {
    int i = 0;
    int ans = -1;
    int judge = 0;
    if (s2 == "") {
        return 0;
    }

    for (i = 0; s1[i] !='\0'; i++) {
        judge = 0;
        for (int j = 0; s2[j] != '\0'; j++) {
        // ｓ２の０番目の文字は存在しないので、＋１している
            if (str_eql_n(s1+i, s2, j+1)) {
                judge++;
            }
        }
        if (judge == str_len(s2)) {
            ans = i;
        }
    }
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
char * str_copy(char* s2, char* s1) {
  int a = str_len(s1);
  int i; 

  for (i = 0; i<a; i++) {
   s2[i] = s1[i];
  }
  s2[i] ='\0';
  return s2;
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
// int str_search_num(char* s1, char*s2) {
//     int num = 0;
//     int ans[100];
//     while (str_search(s1,s2) == -1) {
//         ans[num] = str_search(s1,s2);
//         s1[]
//     }
        
// }

char* str_subst(char* s1, char* s2, char* s3) {
    int position;
    int num = str_len(s2);
    int add = 0;
    int i,j,k;
    char *s4 = malloc (sizeof (char) * 100);
    char *s5 = malloc (sizeof (char) * 100);
    if (str_search(s1,s2) == -1) {
        str_copy(s4,s1);
        return s4;
    } else {
        while(str_search(s1,s2)==-1){
            add++;
            position = str_search(s1,s2);
            for (i=0; i<=position; i++) {
                s4[i] = s1[i];
            }
            for (j=0; s3[j]!='\0'; j++) {
                s4[i+j-1] = s3[j];
            }
            for (k = i+j-1; s1[k-j+num]!='\0'; k++) {
                s4[k] = s1[k-j+num];
            }
            s4[k] = '\0';
        }
    }
}
// updated 2021-11-21
int str_subst_test(void) {
  char s1[100] = "He is nice.";
  char s2[100] = "aaa bbb ccc abc";
  char s3[100] = "zzz bbb ccc zbc";

  return \
    str_eql(str_subst(s1, "are", "are not"), "He is nice.") &&
    str_eql(str_subst(s1, "is", "is not"), "He is not nice.") &&
    str_eql(str_subst(s2, "a", "z"), "zzz bbb ccc zbc") &&
    str_eql(str_subst(s3, "z", "123"), "123123123 bbb ccc 123bc");
}
int main() {
    char s1[100] = "He is nice.";
    char s2[100] = "aaa bbb ccc abc";
    char s3[100] = "zzz bbb ccc zbc";
    printf("%s",str_subst(s3, "z", "123"));
    return 0;
}