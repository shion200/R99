#include<stdio.h>
int sum_of_divisors(int n){
    int i=1;
    int y=0;
    for(i;i<=n;i++){
        if(n%i==0){
            y+=i;
        }    
    }
    return y;
}
int is_perfect(int n){
    int sum;
    sum = sum_of_divisors(n)-n;
    return sum == n;
}
int next_perfect(int n){
    int ans;
    for(int i = n+1;i <= n*n; i++){
        if(is_perfect(i)==1){
            ans = i;
            break;
        }
    }
    return ans;
}
int next_perfect_test(void) {
  return next_perfect(3) == 6 &&
         next_perfect(6) == 28 &&
         next_perfect(20) == 28 &&
         next_perfect(28) == 496;
}
int main(){
    printf("%d",next_perfect_test());
    return 0;
}