#include <stdio.h>
int c(int n) {
    if (n == 1) {
        return 1;
    } else if (n%2 == 0) {
        return n/2;
    } else {
        return 3*n+1;
    }
}
int collatz(int n) {
    if (n == 1) {
        return 1;
    }
    // c(n)を判定させた時にn=1でなくてはならないため、一回回数が多い。
    int i = 2;
    int judge = c(n);
    while (judge > 1) {
        judge = c(judge);
        i++;
    }
    return i;
}
int max_collatz(int n) {
    // 最大の数は97
    int ans;
    int max = 0;
    for (int i = 1; i <= n; i++) {
        if (max < collatz(i)) {
            max = collatz(i);
            ans = i;
        }
    }
    return ans;
}
int collatz_test(void) {
  return collatz(1) == 1 &&
    collatz(2) == 2 &&
    collatz(10) == 7 &&
    collatz(97) == 119 &&
    collatz(100) == 26;
}
int main(){
    printf("%d",max_collatz());
}