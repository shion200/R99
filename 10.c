#include <stdio.h>
int power(int n, int m){
    int i,x;
    x=1;
    for(i=0;i<m;i++){
        x=x*n;
    }
    return x;
}
int power_test(void) {
  return power(2,0);
//   == 1 &&
//     power(2,10) == 1024 &&
//     power(2,30) == 1073741824 &&
//     power(2, 31) == -2147483648 &&
//     power(2,32) == 0;
}
int main(){
    printf("%d",power_test());
    return 0;
}