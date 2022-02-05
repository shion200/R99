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
int fibo_over(int n) {
    int i = 0;
    while(fibo(i) <= n) {
        i++;
    }
    return i;
}
int sum_of_fibo_between(int n, int m) {
    int i = fibo_over(n);
    int sum = 0;
    for (i; i < fibo_over(m); i++) {
        sum += fibo(i);
    }
    return sum;
}

int sum_of_fibo_between_test(void) {
  return sum_of_fibo_between(10, 20) == 13 &&
    sum_of_fibo_between(20, 300) == 576 &&
    sum_of_fibo_between(300, 4000) == 6155 &&
    sum_of_fibo_between(10000, 100000) == 178707;
}
int main() {
    printf("%i",sum_of_fibo_between_test());
}