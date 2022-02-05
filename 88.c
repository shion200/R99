#include <stdio.h>
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
int str_search_test(void) {
  char s1[]="The long and winding road";

  return str_search(s1, "") == 0 &&
    str_search(s1, "The") == 0 &&
    str_search(s1, "long") == 4 &&
    str_search(s1, "love") == -1 &&
    str_search(s1, "advance") == -1  &&
    str_search(s1, "road") == 21 &&
    str_search(s1, "long long long long long string") == -1;
}
int main(){
    printf("%i",str_search_test());
}