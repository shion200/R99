#include <stdio.h>
#include <math.h>
float en(int r){
    double y;
    y= r*r*M_PI;
    return y;

}
int main(void){
    printf("%f",en(3));
    return 0;
}