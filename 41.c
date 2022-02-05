#include<stdio.h>
// int is_prime(int n){
//     int i=3;
//     int z=0;
//     if(n==2){
//         return 1;
//     }
//     else if(n%2==0){
//         return 0;
//     }
//     else{
//         for(i;i<n;i+=2){
//             if(n%i==0){
//                 z++;
//                 break;
//             }
//         }
//         if(z==0){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }
// }
int is_prime(int n){
    if(n==0 ||n==1){
        return 0;
    }
    else if(n==2 ||n==3){
        return 1;
    }
    if(n%2==0){
        return 0;
    }else{
        int i;
        for(i=3;i*i<=n;i+=2){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}
int p41(long long int n){
    long long int i = 2;
    long long int y = n;
    int sum = 0;
    while(y>1){
        if(n%i == 0){
            if(is_prime(i)){
                y = y/i;
                sum = i;
            }
        }
        i++;
        if(i == n){
            break;
        }
    }
    return sum;
}
int p41_test(void) {
  return p41(30) == 5 &&
    p41(150) == 5 &&
    p41(1234) == 617 &&
    p41(36789) == 12263 &&
    p41(600851475143) == 6857;
}
int main(){
    printf("%i",p41_test());
    return 0;
}