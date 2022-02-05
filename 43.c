#include<stdio.h>
int factorial(int n){
    int ans = 1;
    int i;
    if(n == 0){
        return 1;
    }
    for(i = 1;i <= n; i++){
        ans *= i;
    }
    return ans;
}
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
int p43(void){
    int i = 3;
    int count = 0;
    while(count <= 1){
        if(is_cubic(factorial(i)+2)){
            count++;
            return i;
        }
        i++;

    }
}
int p43_test(void) {
  return p43();
}
int main(){
    printf("%d",p43_test());
    return 0;
}