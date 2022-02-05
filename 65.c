#include <stdio.h>
#include <stdlib.h>

int my_rand(int n){
    return rand() % n;
}
int win_lose(int n, int m) {
    // 0が勝ち、1が分け、2が負け
    if (n == m) {
        return 1;
    } else if (m == n-1) {
        return 0;
    } else if (m == 2 && n == 0) {
        return 0;
    } else {
        return 2;
    }

}
void p65(int n) {
    int me;
    int x;
    int win = 0;
    int draw = 0;
    int lose = 0;
    for (int i = 0; i < n; i++) {
        me = 5;
        x = my_rand(3);
        // 0の時グー、1の時はチョキ、2の時はパー
        while (me > 3) {
            // 3以下になるときまで入力させる
            scanf("%d",&me);
        }
        if (win_lose(x, me) == 0) {
            win++;
        } else if (win_lose(x, me) == 1) {
            draw++;
        } else {
            lose++;
        }
    }
    printf("%d勝%d敗%d分け",win,lose,draw);
}
int main(){
    p65(100);
}