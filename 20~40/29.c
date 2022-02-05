#include<stdio.h>
int main(){
    int i=1;
    for(i;i!=0;i++){
        if(i%3==1 && i%5==2 && i%7==3){
            printf("%d\n",i);
            break;
        }
    }
}