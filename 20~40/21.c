#include<stdio.h>
int max2(int x, int y){
    if(x<=y){
        return y;
    }
    else{
        return x;
    }
}
int max3(int x, int y, int z){
    return max2(max2(x,y),z);
}
int max3_test(void) {
  return max3(1,2,3) == 3 &&
    max3(2,3,1) == 3 &&
    max3(3,2,1) == 3 &&
    max3(0,0,0) == 0;
}
int main(){
    printf("%i",max3_test());
    return 0;
}