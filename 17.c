#include<stdio.h>
//1;31 2;18 3;31 4;30 5;31 6;30 7;31 8;31 9;30 10;30 11;30 12;31
int days(int mm, int dd){
    switch(mm){
        case 1:
            return dd;
        case 2:
            return dd+31;
        case 3:
            return dd+28+31;
        case 4:
            return dd+28+31*2;
        case 5:
            return dd+28+31*2+30;
        case 6:
            return dd+28+31*3+30;
        case 7:
            return dd+28+31*3+30*2;
        case 8:
            return dd+28+31*4+30*2;
        case 9:  
            return dd+28+31*5+30*2;
        case 10:
            return dd+28+31*5+30*3;
        case 11:
            return dd+28+31*6+30*3;
        case 12:
            return dd+28+31*6+30*4;
    }
}
// hkimuraの回答
// int days(int mm, int dd){
//     int days{0,31,28,31,30,31,30,31,31,30,31,30,31}
//     int ret=0;
//     for(int i=0;i<mm;i++){
//         ret +=days[i];
//     }
//     return ret+dd;
// }
int days_test() {
  return days(12,31);
//    == 1 &&
//     days(1,30) == 30 &&
//     days(5,2) == 122 &&
//     days(12,31) == 365;
}
int main(){
    printf("%d",days_test());
    return 0;
}