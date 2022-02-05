#include<stdio.h>
int time_to_int(int h, int m, int s){
    int z;
    z=h*3600+m*60+s;
    return z;
}
int sec_between(int h1, int m1, int s1, int h2, int m2, int s2){
    int y;
    y=time_to_int(h1, m1, s1)-time_to_int(h2, m2, s2);
    if(y<=0) {printf("%d\n",y*(-1));}
    else if(y>0){printf("%d\n",y);}
}
int sec_between_test(void) {
  return sec_between(1, 2, 3, 1, 2, 3);
//   == 0 &&
//     sec_between(2, 0, 0, 1, 0, 0) == -3600 &&
//     sec_between(1, 0, 0, 2, 0, 0) == 3600 &&
//     sec_between(1, 2, 3, 3, 2, 1) == - sec_between(3, 2, 1, 1, 2, 3);
}
int main(){
    sec_between_test();
    return 0;
}