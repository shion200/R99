#include<stdio.h>
int is_square(int n){
    int i = 1;
    int judge = 0;
    for(i;i <= n; i++){
        if(n%i == 0 && i*i == n){
            judge++;
            break;
        }
    }
    if(n < 0){
        return 0;
    }else if(n == 0){
        return 1;
    }else if(judge == 0){
        return 0;
    }else{
        return 1;
    }
}
int is_square_test(void) {
  return is_square(0) &&
    is_square(1) &&
    ! is_square(2) &&
    ! is_square(3) &&
    is_square(4) &&
    ! is_square(5) &&
    ! is_square(6) &&
    ! is_square(7) &&
    ! is_square(8) &&
    is_square(9) &&
    is_square(100) &&
    is_square(237169) &&
    ! is_square(-1) &&
    ! is_square(-4) &&
    ! is_square(1000);
}
int main(){
    printf("%d",is_square_test());
    return 0;
}