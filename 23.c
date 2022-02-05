#include<stdio.h>
int triangle(int x, int y, int z){
    if(x+y>z && y+z>z && z+x>y){
        return 1;
    }
    else {
        return 0;
    }
}
int triangle_test(void) {
  return triangle(-3, -4,-10) == 0 &&
    triangle(1,1,0) == 0 &&
    triangle(1,1,1) == 1 &&
    triangle(1,1,2) == 0;
}
int main(){
    printf("%i",triangle_test());
    return 0;
}