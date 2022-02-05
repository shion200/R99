#include<stdio.h>
int sum_of_digits(int n){
    int sum;
    sum=0;
    for(int i;n>0;i++){
        sum = sum+n%10;
        n=n/10;
    }
    return sum;
}
int sum_of_digits_test(void) {
  return sum_of_digits(0)==0 &&
    sum_of_digits(10)==1 &&
    sum_of_digits(1010101) == 4 &&
    sum_of_digits(12345) == 15 &&
    sum_of_digits(54321) == 15;
}
int main(){
    printf("%d",sum_of_digits_test());
    return 0;
}