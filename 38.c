#include<stdio.h>
int is_prime(int n){
    int i=3;
    int z=0;
    if(n==2){
        return 1;
    }
    else if(n%2==0){
        return 0;
    }
    else{
        for(i;i<n;i+=2){
            if(n%i==0){
                z++;
                break;
            }
        }
        if(z==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int p38(int n){
    int x = 2;
    int count = 0;
    int sum = 0;
    while(n > count){
        if(is_prime(x)){
            count++;
            sum += x;
        }
        x++;
    }
    return sum;
}
int p38_test(void) {
  return p38(10) == 129 &&
         p38(100) == 24133 &&
         p38(1000) == 3682913;
}
int main(){
    printf("%i",p38_test());
    return 0;
}