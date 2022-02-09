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


int str_eql_n(char* s1, char* s2, int n) {
    if (str_len(s1) < n || str_len(s2) < n) {
        return 0;
    }
    if (s1[n-1] == s2[n-1]) {
        return 1;
    }
    return 0;
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

char* str_append(char* s1, char* s2) {
    int a = str_len(s1);
    int i;
    for (i=0; s2[i] !='\0'; i++) {
        s1[a+i] = s2[i];
    }
    s1[a+i] = '\0';
    return s1;
    // int i;
    // for (i = 0;s1[i]!='\0';i++) {
    //     ;
    // }
    // str_copy(s1+i,s2);
    // return s1;
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
// s2が何個あるのかを返す関数
int str_search_n(char* s1, char* s2) {
    int i = 0;
    int ans = 0;
    int judge = 0;
    if (s2 == "") {
        return ans;
    }

    for (i = 0; s1[i] !='\0'; i++) {
        judge = 0;
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i+j] == s2[j]) {
                judge++;
            }
        }
        if (judge == str_len(s2)) {
            ans++;
            judge = 0;
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




char* str_subst(char* s1, char* s2, char* s3) {
    int position;
    int num = str_len(s2);
    int add = 0;
    int number = 3;
    int judge = 0;
    int s = str_search_n(s1,s2);
    char *s4 = malloc (sizeof (char) * 100); 
    char *s5 = malloc(sizeof(char)*100);
    str_copy(s4,s1);
    str_copy(s5,s1);
    add = str_search(s4,s2);
    if (add == -1) {
        return s4;
    }
    while(s>0) {
        add = str_search(s4,s2);
        if (add == -1) {
            break;
        }
        s4[add] = '\0';
        s4 = str_remove(s4,add,str_len(s4));
        // s1 = str_append(s4,s3);
        s4 = str_append(str_append(s4,s3),s5+add+num+number%s*2);
        for (int k = 0; s4[k]!='\0'; k++) {
            printf("%c",s4[k]);
        }
        printf("\n");
        // for (int x = 0; s1[x]!='\0'; x++) {
        //     printf("%c",s1[x]);
        // }
        printf("%d\n",add);
        if (s == 1) {
            break;
        }
        number++;
        // judge++;
        
    }
    return s4;
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