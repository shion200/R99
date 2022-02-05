#include <stdio.h>
int square(int n){
    return n*n;
}
int square_test(void) {
  return square(0) == 0 &&
    square(1) == 1 &&
    square(-2) == 4 &&
    square(100) == 10000;
}
int main(){
    printf("%d",square_test());
    return 0;
}    
    