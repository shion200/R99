#include<stdio.h>
int max2(int x, int y){
    if(x<=y){
        return y;
    }
    else{
        return x;
    }
}
int max2_test(void) {
  return max2(1,2) == 2 &&
    max2(2,1) == 2 &&
    max2(3,3) == 3 &&
    max2(-10,-20)== -10;
}
int main(){
    printf("%i",max2_test());
    return 0;
}