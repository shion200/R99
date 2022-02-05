#include <stdio.h>
// nが回文数か判定する関数

int power(int n, int m){
    int i,x;
    x=1;
    for(i=0;i<m;i++){
        x=x*n;
    }
    return x;
}

int judge(int n, int m) {
    int judge = 0;
    int x;
    int y;
    if (m == 1) {
        return 1;
    } else {
        for (int i = 0; i<=m/2; i++) {
            x = power(10,m-i-1);
            y = power(10,i);
            if ((n/x%10)  != (n/y%10)) {
                judge++;
            }
        }
        if (judge >= 1) {
            return 0;
        } 
    }
    return 1;
}
// nからmまでの数の積で表される回文数のうち、最大の数を求める関数。
int p96(int n, int m) {
    int a;
    int x;
    int max = 0;
    for (int i = m; i>=n; i--) {
        for (int j = m; j>=n; j--) {
            a = 0;
            x = i*j;
            while (x>0) {
                x/=10;
                a++;
            }
            if(judge(i*j, a) == 1) {
                if (max < i*j) {
                    max = i*j;
                }
            }
        }
    }
    return max;
}
int p96_test(void) {
  return p96(10, 20) == 323 &&
    p96(10, 100) == 9009 &&
    p96(100, 1000) == 906609;
}
int main() {
    printf("%d\n",p96_test());
}