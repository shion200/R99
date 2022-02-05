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
int sum_of_divisors_test(void) {
  return sum_of_divisors(1) == 1 &&
         sum_of_divisors(10) == 18 &&
         sum_of_divisors(100) == 217 &&
         sum_of_divisors(1000) == 2340;
}
int main(){
    printf("%i",sum_of_divisors_test());
    return 0;
}