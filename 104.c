#include <stdio.h>
#include<time.h>
int power(int n, int m){
    int i,x;
    x=1;
    for(i=0;i<m;i++){
        x=x*n;
    }
    return x;
}
long long int sum_of_divisors(long long int n) {
    long long int judge = n;
    long long int ans = 0;
    long long int x = 0;
    int i;
    for (int j = 1; judge%2 == 0; j++) {
        judge /= 2;
        x += power(2,j);
    }
    for (i = 1; i <= n/2; i+=2) {
        if (n%i == 0) {
            ans += i;
            if (n%2 == 0) {
                ans += x*i;
            }
        }
    }
    if (n%2 == 0) {
        return ans;
    }
    return ans+n;
}

long long int sum_of_divisors_test(void) {
  return sum_of_divisors(28) == 56 &&
    sum_of_divisors(79) == 80 &&
    sum_of_divisors(100) == 217 &&
    sum_of_divisors(2095632000) == 9904265280;
}
int main() {
    clock_t start, end;
    start = clock();
    printf("%i\n",sum_of_divisors_test());
    end =clock();
    printf("%.3f秒かかりました\n",(double)(end - start)/CLOCKS_PER_SEC);
    return 0;
}