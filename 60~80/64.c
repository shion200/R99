#include <stdio.h>
#include <string.h>
// 平年の時の誕生日が同じ人を出力する。
int days(int mm, int dd) {
    switch(mm){
        case 1:
            return dd;
        case 2:
            return dd+31;
        case 3:
            return dd+28+31;
        case 4:
            return dd+28+31*2;
        case 5:
            return dd+28+31*2+30;
        case 6:
            return dd+28+31*3+30;
        case 7:
            return dd+28+31*3+30*2;
        case 8:
            return dd+28+31*4+30*2;
        case 9:  
            return dd+28+31*5+30*2;
        case 10:
            return dd+28+31*5+30*3;
        case 11:
            return dd+28+31*6+30*3;
        case 12:
            return dd+28+31*6+30*4;
    }
}
char *to_date(int n){
    int z=0;;
    int days[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
    for(int i=0;i<=12;i++){
        if(days[i]<n && n<=days[i+1]){
            z=i;
        }
    }
    char date[][12]={"January","February","March","April","May","June","July","August","September","October","November","Decenver"};
    printf("%s,%d",date[z],n-days[z]);
}

int p64(int n) {
    int s = 1;
    int b[n];
    int x = 0;
    int y = 0;
    for (int l = 0; l < n; l++) {
        b[l] = 0;
    }
    // 一クラスの人それぞれの誕生日を入力させる。
    // 1月１日の時は、1 1と入力させる。
    for (int i = 0;i < n; i++) {
        scanf("%d %d", &x, &y);
        b[i] = days(x,y);
    }

    for (int k = 0; k < n; k++) {
        for (int a = k+1; a < n; a++) {
            if (b[k] != 0) {
                if (b[k] == b[a]) {
                    s++;
                    b[a] = 0;
                }
            }
        } 
        b[k] = 0;
    }
    return s;
}
int main(){
    int x = 5;
    printf("%i",p64(x));
    return 0;
}