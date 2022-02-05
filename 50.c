#include<stdio.h>
int is_square(int n){
    // int if_c;
    // int i;
    // for(i = 1;i<n;i++){
    //     if_c =(i*i*i == n);
    //     if(if_c){
    //         return 1;
    //     }
    // }
    // return 0;
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

int square_cubic(int n){
    int ans=0;
    for(int i = 1;i*i*i < n;i++){
            if(is_square(i*i*i)){
                ans = i*i*i;
            }
    }
    return ans;
}
int square_cubic_test(void) {
  return square_cubic(10) == 1 &&
    square_cubic(100) == 64 &&
    square_cubic(1000) == 729 &&
    square_cubic(10000) == 4096 &&
    square_cubic(100000) == 46656 &&
    square_cubic(1000000) == 531441;
}

int main(){
    printf("%i",square_cubic_test());
    return 0;
}