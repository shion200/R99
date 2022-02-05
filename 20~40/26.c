#include<stdio.h>
int product(int n, int m){
    int sum=1;
    for(n;n<=m;n++){
        sum=sum*n;
    }
    return sum;
}
int product_test(void) {
  return product(0,10) == 0 &&
    product(1,10) == 3628800 &&
    product(10,20) == -18221056; // surprise!
}
int main(){
    printf("%i",product_test());
    return 0;
}