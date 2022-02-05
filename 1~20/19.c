#include<stdio.h>
#include <string.h>
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
// int to_date_test() {
//   return to_date( 1, 1);
//     // == 0 
//     // &&
//     // strcmp("August, 8",    to_date( 8, 8) == 0 &&
//     // strcmp("October, 10",  to_date(10,10) == 0 &&
//     // strcmp("December, 31", to_date(12,31) == 0;
// }
int main(){
    to_date(365);
}