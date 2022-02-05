#include<stdio.h>
int sqrt_int(int n){
    int ans = 0;
    for(int i = 0;i*i <=n;i++){
        ans = i;
    }
    return ans;
}
int sqrt_int_test(void) {
  return sqrt_int(0) == 0 &&
    sqrt_int(10) == 3 &&
    sqrt_int(24) == 4 &&
    sqrt_int(25) == 5 &&
    sqrt_int(100) == 10;
}
int main(){
    printf("%d",sqrt_int_test());
    return 0;
}