#include <stdio.h>
void parity_p(void){
    int y;
    scanf("%d",&y);
    if(y%2==0)printf("偶数です。");
    else printf("奇数です");
}
int main(void){
    parity_p();
}

