#include<stdio.h>
int max_prime_under(int n){
    int i;
    int x;
    int z=2;
    int sum;
    i=n;
    for(i;i>0;i--){
        x=0;
        for(z;z<i;z++){
            if(i%z==0){
                x++;
                break;
            }
        }
        if(x==0){
            sum = i;
            break;
        }
    }
    return sum;
}
        
int p36_test(void) {
  return max_prime_under(10)== 7 &&
    max_prime_under(1000) == 997 &&
    max_prime_under(power(2,16)) == 65521;
}
int main(){
    printf("%i",p36_test());
    return 0;
}