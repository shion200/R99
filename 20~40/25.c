#include<stdio.h>
int sum(int n, int m){
    int sum=0;
    for(n;n<=m;n++){
        sum = sum +n;
    }
    printf("%d",sum);
}
int sum_test(void) {
  return sum(0,10) == 55 &&
    sum(0,-10) == 0 &&
    sum(-100,200) == 15050 &&
    sum(0,1000) == 500500 &&
    sum(2000,3000) == 2502500;
}
int main(){
    sum_test();
    return 0;
}