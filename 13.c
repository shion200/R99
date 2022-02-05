#include<stdio.h>
void era_p(int year){
    if(1926<=year && year<=1989) {printf("昭和%d年\n",year-1925);}
    else if(1989<year && year<=2019) {printf("平成%d年\n",year-1988);}
    else if(2019<year) {printf("令和%d年\n",year-2018);}
}
int main(){
    era_p(2000);
}