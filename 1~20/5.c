#include <stdio.h>
#include <math.h>
float en_p(void){
    float y;
    int r;
    scanf("%d",&r);
    y= r*r*M_PI;
    printf("%f",y);
}
int main(void){
    printf("%f",en_p());
    return 0;
}