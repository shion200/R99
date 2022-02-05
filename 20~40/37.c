#include<stdio.h>
int max_prime_under(int n){
    int i;
    int x;
    int z=2;
    int sum;
    i=n;
    for(i;i>0;i--){
        x=0;
        for(z;z<i;z++){
            if(i%z==0){
                x++;
                break;
            }
        }
        if(x==0){
            sum = i;
            break;
        }
    }
    return sum;
}
int p37(int y){
    int x;
    int z;
    x=max_prime_under(y);
    return max_prime_under(x-1);
}
int main(){
    printf("%d",p37(1073741824));
    return 0;
}