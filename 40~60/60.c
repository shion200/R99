#include<stdio.h>
#include <stdlib.h>
int my_rand(int n){
    return rand() % n;
}
float randf(void){
    float ans = (float)my_rand(10000) / 10000;
    return ans;
}

int power(int n, int m){
    int i,x;
    x=1;
    for(i=0;i<m;i++){
        x=x*n;
    }
    return x;
}
float pi(int n){
    int i;
    int count = 0;
    float x[2*n];
    for(int j = 0;j<=2*n;j++){
        x[j] = 0;
    }

    for(i = 1;i<=2*n;i+=2){
        x[i] = randf();
        x[i+1] = randf();
        if(x[i] * x[i] + x[i+1] * x[i+1] <= 1){
            count++;
        }
    }
    float judge = count * 1.0;
    float ans = (judge/n)*4;
    return ans;
}
int pi_test(void) {
  int i;
  for (i = 1; i < 6; i++) {
    printf("%f\n", pi(power(10, i)));
  }
  return 1;
}
int main(){
    printf("%i",pi_test());
    return 0;
}