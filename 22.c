#include<stdio.h>
int max2(int x, int y){
    if(x<=y){
        return y;
    }
    else{
        return x;
    }
}
int max4(int x, int y, int z, int w){
    return max2(max2(x,y),max2(z,w));
}
int max4_test(void) {
  return max4(1,2,3,4) == 4 &&
    max4(2,3,4,1) == 4 &&
    max4(3,4,1,2) == 4 &&
    max4(4,1,2,3) == 4;
}
int main(){
    printf("%i",max4_test());
    return 0;
}