#include <stdio.h>
int is_empty(char* s) {
    return s[0] == '\0';
}

int str_to_int(char* s1) {
    char s2[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    int s3[] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int ans = 0;
    int flag = 0;
    int judge = 1;
    int i = 0;
    if (is_empty(s1)) {
        return ans;
    }
    for (i; s1[i]!='\0'; i++) {
        flag = 0;
        for (int j = 0; j<10; j++) {
            if (s1[i] == s2[j]) {
                ans = ans*10+s3[j];
                flag++;
            }
        }
        if (flag < 1) {
            judge = -1;
        }
    }
    ans *= judge;
    return ans; 
}

int str_to_int_test(void) {
  return str_to_int("") == 0 &&
    str_to_int("123") == 123 &&
    str_to_int("1024") == 1024 &&
    str_to_int("9999") == 9999 &&
    str_to_int("-314") == -314 &&
    str_to_int("-100200")== -100200;
}
int main() {
    printf("%i", str_to_int_test());
    return 0;
}
