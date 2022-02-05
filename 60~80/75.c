#include<stdio.h>
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
int factorial_test(void) {
  return factorial(0) == 1 &&
    factorial(5) == 120 &&
    factorial(10) == 3628800 &&
    factorial(12) == 479001600;
}
int main(){
    printf("%i",factorial_test());
    return 0;
}