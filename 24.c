#include<stdio.h>
int triangle(int x, int y, int z){
    if(x+y>z && y+z>z && z+x>y){
        return 1;
    }
    else {
        return 0;
    }
}
int right_angle(int x, int y, int z){
    if(triangle(x,y,z)==1){
        if(x*x+y*y==z*z || z*z+y*y==x*x || x*x+z*z==y*y){
            return 1;
        }
        else {
            return 0;
        }
    }
    else{
        return 0;
    }
}
int right_angle_test(void) {
  return right_angle(3,4,5)== 1 &&
    right_angle(10,6,8) == 1 &&
    right_angle(1,1,1) == 0;
}
int main(){
    printf("%i",right_angle_test());
    return 0;
}