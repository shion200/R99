#include<stdio.h>
int is_prime(int n){
    int i=3;
    int z=0;
    if(n==2){
        return 1;
    }
    else if(n%2==0){
        return 0;
    }
    else{
        for(i;i<n;i+=2){
            if(n%i==0){
                z++;
                break;
            }
        }
        if(z==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int sum_primes_under(int n){
    int sum=0;
    int i=1;
    for(i;i<n;i++){
        if(is_prime(i)){
            sum+=i;
        }
    }
    return sum-1;
}
int sum_primes_under_test(void) {
  return sum_primes_under(2) == 0 &&
         sum_primes_under(3) == 2 && 
         sum_primes_under(10) == 17 &&
         sum_primes_under(100) == 1060 &&
         sum_primes_under(1000) == 76127;
}
int main(){
    printf("%d",sum_primes_under_test());
    return 0;
}
