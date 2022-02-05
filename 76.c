#include <stdio.h>
int factorial(int n){
    int ans = 1;
    int i;
    if(n == 0){
        return 1;
    }
    for(i = 1;i <= n; i++){
        ans *= i;
    }
    return ans;
}
int factorial_over(int m) {
    int i = 0;
    while (factorial(i) < m) {
        i++;
    }
    return i;
}
int factorial_over_test(void) {
  return factorial_over(0) == 0 &&
    factorial_over(10) == 4 &&
    factorial_over(1000) == 7 &&
    factorial_over(20000000) == 11;
}
int main(){
    printf("%i",factorial_over_test());
}