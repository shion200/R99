#include<stdio.h>
void divisors_p(int n){
    int i=1;
    for(i;i<=n;i++){
        if(n%i==0){
            printf("%d,",i);
        }    
    }
}
int main(){
    divisors_p(6);
    return 0;
}