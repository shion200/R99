#include <stdio.h>
int fibo(int n) {
    int zero = 0;
    int first = 1;
    int second = 1;
    int ans;
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 1;
    }

    for (int i = 3; i <= n; i++) {
        if (i%3 == 0) {
            zero = first + second;
        } else if (i%3 == 1) {
            first = zero + second;
        } else if (i%3 == 2) {
            second = zero + first;
        }
    }
    
    if (n%3 == 0) {
        return zero;
    } else if (n%3 == 1) {
        return first;
    } else if (n%3 == 2) {
        return second;
    }
}

int fibo_test(void) {
  return fibo(0) == 0 &&
    fibo(10) == 55 &&
    fibo(30) == 832040 &&
    fibo(44) == 701408733;
}
int main(){
    printf("%i",fibo_test());
}