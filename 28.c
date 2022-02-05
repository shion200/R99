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
int fz(int n){
    if(sum_of_digits(n)%3==0 && n%5==0){
        return 3;
    }
    else if(n%5==0){
        return 2;
    }
    else if(sum_of_digits(n)%3==0){
        return 1;
    }
    else{
        return 0;
    }
}
int fz_test(void) {
  return fz(1)==0 &&
    fz(2)==0 &&
    fz(3)==1 &&
    fz(4)==0 &&
    fz(5)==2 &&
    fz(9)==1 &&
    fz(15)==3 &&
    fz(16)==0;
}
int main(){
    printf("%i",fz_test());
    return 0;
}