#include <stdio.h>
#include <stdlib.h>
int my_rand(int n){
    return rand() % n;
}

//サイズｎの整数配列a[]に０～ｍ未満の乱数をセットする関数
void init_randoms_n(int a[ ] , int n, int m) {
    for (int i = 0;i < n;i++) {
        a[i] = my_rand(m);
    }
}

int * shuffle(int n) {
    int judge = 0;
    int a[n];
    int b[n];
    int x = 0;
    int *ans = NULL;
    ans = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i <= n; i++) {
        a[i] = i;
        ans[i] = 0;
    }
    while (x < n) {
        init_randoms_n(b, n, n);
        for (int j = 0; j<n; j++) {
            for (int k = 0; k<n; k++) {
                if (b[j] == a[k]) {
                    ans[x] = b[j];
                    a[k] = n+1;
                    x++;
                }
            }   
        }
    }
    return ans;
}

int find_i_in(int i, int *a, int n) {
  int j;
  for (j=0; j<n; j++) {
    if (i == a[j]) {
      return 1; // found
    }
  }
  return 0;  // not found
}

// 0~n-1 は a[n] 中に見つかるか？
int shuffle_test(void) {
  int n = 20;
  int *a = shuffle(n);
  int i;

  for (i=0; i<n; i++) {
    //printf("%i ", a[i]);
    if (find_i_in(i, a, n)) {
      continue;
    } else {
      return 0;
    }
  }
  //printf("\n");
  return 1;
}

int main() {
    printf("%i",shuffle_test());
    return 0;
}