#include<stdio.h>
int sum_of_primes(int n){
    int i=1;
    int y=0;
    for(i;i<=n;i++){
        if(n%i==0){
            y++;
        }    
    }
    return y;
}
int primes(int n){
    int s=2;
    int z=0;
    for(s;s<=n;s++){
        if(sum_of_primes(s)==2){
            z++;
        }
    }
    return z;
}
int primes_test(void) {
  return primes(10)== 4 &&
         primes(100) == 25 &&
         primes(1000) == 168 &&
         primes(10000) == 1229;
}
int main(){
    printf("%i",primes_test());
    return 0;
}
