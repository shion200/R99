#include<stdio.h>
#include<math.h>
int is_prime(int n){
    int fast_num =n;
    if(n==0 ||n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        for(int i=2;i<fast_num;i++){
            if(n%i==0){
                return 0;
            }
            fast_num=n/i;
        }
    }
    return 1;
}
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
int p39(void){
    int x[10000];
    for(int i = 0;i <= 10000;i++){
        if(is_prime(i)){
            x[i] = 1;
        }
        else{
            x[i] = 0;
        }
    }
    for(int j = 1;j < 10000;j++){
        if(x[j] == 1){
            for(int n = 1;n <= j;n++){
                if(x[n] == 1){
                    if(is_square(j*j-n*n) && is_prime(sqrt(j*j-n*n))){
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
int p39_test(void) {
  return p39()==0;
}
int main(){
    printf("%i",p39_test());
    return 0;
}