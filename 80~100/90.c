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
}


char* str_insert(char* s1, int n, char* s2) {
    char *s3 = malloc (sizeof (char) * 100);
    str_copy(s3, s1+n);
    s1[n] = '\0'; 
    return str_append(str_append(s1,s2),s3);
}

int str_insert_test(void) {
  char s1[100] = "012345";
  return str_eql(str_insert(s1, 3, "abc"), "012abc345") &&
    str_copy(s1, "012345") &&
    str_eql(str_insert(s1, 0, "!"), "!012345") &&
    str_copy(s1, "012345") &&
    str_eql(str_insert(s1, 6, "zzz"), "012345zzz") &&
    str_copy(s1, "012345") &&
    str_eql(str_insert(s1, 100, "xyz"), s1);
}
int main() {
    char s1[100] = "012345";
    printf("%i\n",str_insert_test());
    return 0;
}