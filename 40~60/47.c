#include<stdio.h>
int is_cubic(int n){
    int count = 0;
    int x;
    if(n<0){
        x = n*-1;
    }else{
        x=n;
    }
    for(int i = 0;i <= x ;i++){
        if(i*i*i == x){
            count++;
            break;
        }
    }
    return count;
}
int is_cubic_test(void) {
  return is_cubic(0) &&
    is_cubic(-1) &&
    is_cubic(1000) &&
    is_cubic(9663597) &&
    ! is_cubic(-3) &&
    ! is_cubic(-4) &&
    is_cubic(-1000);
}
int main(){
    printf("%i",is_cubic_test());
    return 0;
}