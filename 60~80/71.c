#include <stdio.h>
#include <stdlib.h>

int sum_n(int n) {
    int ans = 0;
    int x;
    if (n == 0) {
        return 0;
    }
    FILE *fp = fopen("numbrs.txt","r");
    if ((fp = fopen("numbers.txt","r")) == NULL) {
        exit(1);
    }

    for (int i = 1; i <= n; i++) {
        fscanf(fp,"%i",&x);
        ans += x;
    }
    fclose(fp);
    return ans;
}
int sum_n_test(void) {
  return sum_n(10) == 72076 &&
    sum_n(0) == 0 &&
    sum_n(100) == 526885 &&
    sum_n(1000) == 5182867;
}
int main() {
    printf("%i",sum_n_test());
}