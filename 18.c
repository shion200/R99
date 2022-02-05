#include<stdio.h>
int is_leap(int year){
    if(year%4==0) {
        if(year%100==0) {
            if(year%400==0) return 1;
            else return 0;
        }
        return 1;
    }
    else return 0;
}
int days(int mm, int dd){
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int ret=0;
    for(int i=0;i<mm;i++){
        ret +=days[i];
    }
    return ret+dd;
}
int is_leap(int year);
int days(int mm, int dd);
int days_between(int y1, int m1, int d1, int y2, int m2, int d2){
    int a,sum,x;
    sum =0;
    x=days(m1,d1)-days(m2,d2);
    // printf("%d\n",x);
    if(y1<y2){
        a=y1;
        if(x<=0){
            for(a=y1;a<y2;a++){
                sum=sum+365;
                sum=sum+is_leap(a);
            }
        if(m1<=2 && m2>=3){
            sum=sum+x*-1;
        }
        else{
            sum=sum+x*-1+is_leap(y2);
        }
        // sum= sum+x*-1;
        }
        else{
            for(a=y1;a<y2;a++){
                sum=sum+365;
                sum=sum+is_leap(a);
            }
            if(m2<=2 && m1>=3){
                sum=sum+x;
            }
            else{
                sum=sum+x+is_leap(y2);
            }
        }
    }
    else if(y2<y1){
        if(x>=0){
            for(a=y2;a<y1;a++){
                sum=sum+365;
                sum=sum+is_leap(a);
            }
            if(m2<=2 && m1>=3){
                sum=sum+x*-1;
            }
            else{
                sum=sum+x*-1+is_leap(y1);
            }
        }
        else{
            for(a=y2;a<y1;a++){
                sum=sum+365;
                sum=sum+is_leap(a);
            }
            if(m1<=2 && m2>=3){
                sum=sum+x;
            }
            else{
                sum=sum+x+is_leap(y1);
            }
            sum= sum+x*-1;
        }
    }
    else{
        if(x>=0){
            if(m2<=2 && m1>=3){
                sum=x+is_leap(y1);
            }
            else{
                sum=x;
            }
        }
        else{
            if(m1<=2 && m2>=3){
                sum=x*-1+is_leap(y1);
            }
            else{
                sum=x*-1;
            }
        }
    }
    printf("%d\n",sum);
}
int main(){
    days_between(2021,2,1,2020,2,1);
}