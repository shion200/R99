#include <stdio.h>
int abs(int n){
    if(n>=0) printf("%d",n);
    else printf("%d",n);
}
int abs_test(void) {
  return abs(0)==0  &&
    abs(1) == 1 &&
    abs(-1) == 1 &&
    abs(1*2*3) ==6;
}
int main (void){
    printf("%d",abs());
    return 0;
}