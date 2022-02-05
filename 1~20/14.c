#include<stdio.h>
int is_leap(int year){
    if(year%4==0) {
        if(year%100==0) {
            if(year%400==0) return 1;
            else return 0;
        }
        return 1;
    }
    else return 0;
}
int is_leap(int year){
    if(year%400 == 0){
        return 1;
    }
    if(year%100==0){
        return 0;
    }
    return year%4 == 0;
}
int is_leap_test(void) {
  return
    is_leap(2000) &&
    is_leap(2020) &&
    ! is_leap(2021) &&
    ! is_leap(2100) &&
    is_leap(2400);
}
int main(){
    printf("%i",is_leap_test());
    return 0;
}