#include <stdio.h>
#include <stdlib.h>
int my_rand(int n){
    return rand() % n;
}

void init_randoms_99(int a[ ] , int n){
    for(int i = 0;i < n;i++){
        a[i] = my_rand(100);
    }
}

void find_not(int a[ ], int n) {
    int b[100];
    int judge = 0;
    // for (int i = 0; i <= 99; i++) {
    //     b[i] = 0;
    // }

    for (int j = 0; j <= 99; j++) {
        b[j] = j;
    }

    for (int k = 0; k < n; k++) {
        judge = a[k];
        if (b[judge] == a[k]) {
            b[judge] = 0;
        }
    }
    
    for (int x = 0; x <= 99; x++) {
        if (b[x] != 0) {
            printf("%d\n", b[x]);
        }
    }
}


int find_not_test(void) {
  int n = 100;
  int a[n];

  init_randoms_99(a, n);
  find_not(a, n);
  return 1; // テストになってない。すいません。                                 
}
int main(){
    printf("%i",find_not_test());
    return 0;
}
