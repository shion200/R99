#include<stdio.h>
int p40(){
    int n=1;
    int z=0;
    for(int i=2;i<=20;i++){
        while(n>20){
            int x=1;
            x*=i;
            z=x;
        }
        n*=z;
    }
    return n;
}
int p40_test(void) {
  int i;
  int lcm = p40();
                                                                                 
  for (i=2; i<=20; i++) {
    if (lcm%i != 0) {
      return 0;
    }
  }
  return 1;
}
int main(){
    printf("%i",p40_test());
}