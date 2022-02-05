#include<stdio.h>
#include <stdlib.h>
int my_rand(int n){
    return rand() % n;
}
void init_randoms_99(int a[ ] , int n){
    for(int i = 0;i < n;i++){
        a[i] = my_rand(100);
    }
}
int init_randoms_99_test(void) {
  int n = 100;
  int a[n];

  init_randoms_99(a, n);

  int i;
  for (i=0; i<n; i++) {
    if (a[i]<0 || 100<=a[i]) {
      return 0;
    }
  }
  return 1;
}
int main(){
    printf("%i",init_randoms_99_test());
    return 0;
}