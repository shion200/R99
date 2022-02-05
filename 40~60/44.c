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
int is_perfect_test(void) {
  return is_perfect(6) &&
         ! is_perfect(8) &&
         is_perfect(28) &&
         ! is_perfect(30);
}
int main(){
    printf("%i",is_perfect_test());
    return 0;
}