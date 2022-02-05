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

int find_max_dupli(int a[ ], int n) {
    int b[100];
    int judge = 0;
    int ans = 0;
    int k = 0;
    
    for(int i = 0; i <= 99; i++) {
        b[i] = 0;
    }
    for(int l = 0; l < n; l++) {
        b[a[l]]++;
    }
    for(k; k <= 99; k++){
        if(judge < b[k]) {
           judge = b[k]; 
           ans = k;
        }
    }
    return ans;
}

int main(){
    int n = 100;
    int a[n];

    init_randoms_99(a, n);
    printf("%d\n",find_max_dupli(a, n));
}