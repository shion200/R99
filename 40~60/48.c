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
int is_square_sum(int n){
    int count = 0;
    int y;
    for(int x = 1;x*x <= n;x++){
        y = n-x*x;
        if(y==0){
            break;
        }else if(is_square(n-x*x)){
            count++;
            break;
        }
    }
    if(count == 0 || n == 1){
        return 0;
    }else if(count > 0){
        return 1;
    }else{
        return 0;
    }
}
int is_square_sum_test(void) {
  return ! is_square_sum(1) &&
    is_square_sum(2) &&
    ! is_square_sum(4) &&
    is_square_sum(10) &&
    is_square_sum(90) &&
    is_square_sum(30505) &&
    ! is_square_sum(15) &&
    ! is_square_sum(21) &&
    ! is_square_sum(31414);
}
int main(){
    printf("%d",is_square_sum_test());
    return 0;
}