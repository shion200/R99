#include <stdio.h>
#include <stdlib.h>
int lines(void) {
    int ans = 0;  
    char word[100];
    FILE *fp = fopen("numbers.txt","r");
    while (fscanf(fp,"%s",word) == 1) {
       ans++;
    }
    return ans;
}
int sum_tail(int n) {
    int judge = lines();
    int ans = 0;
    int x;
    FILE *fp = fopen("numbrs.txt","r");
    if ((fp = fopen("numbers.txt","r")) == NULL) {
        exit(1);
    }

    for (int i = 1; i <= judge; i++) {
        fscanf(fp,"%i",&x);
        if (i > judge-n) {
            ans += x;
        }
    }
    fclose(fp);
    return ans;
}
int sum_tail_test(void) {
  return sum_tail(1) == 636 &&
    sum_tail(10) == 51494 &&
    sum_tail(100) == 511390;
}
int main() {
    printf("%i",sum_tail_test());
}