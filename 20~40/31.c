#include<stdio.h>
int more_divisors_p(int n){
    int i=1;
    int y=0;
    for(i;i<=n;i++){
        if(n%i==0){
            y+=1;
        }    
    }
    return y;
}
int most_divisors(int n){
    int x=0;
    int div=0;
    int z=0;
    for(z;z<n;z++){
        if(x<more_divisors_p(z)){
            x=more_divisors_p(z);
            div=z;
        }
    }
    return div;
}
int most_divisors_test(void) {
  return most_divisors(10)== 6 &&
    most_divisors(100) == 60 &&
    most_divisors(1000) == 840;
}
int main(){
    printf("%i",most_divisors_test());
    return 0;
}