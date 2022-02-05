#include<stdio.h>
int time_to_int(int h, int m, int s){
    int z;
    z=h*3600+m*60+s;
    return z;
}
int time_to_int_test(void) {
  return time_to_int(0,0,0)== 0 &&
    time_to_int(0,1,0) == 60 &&
    time_to_int(1,0,0) == 3600 &&
    time_to_int(12,34,56) == 45296;
}
int main(){
    printf("%d",time_to_int_test());
    return 0;
}