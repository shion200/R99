#include<stdio.h>
#include<time.h>
int is_prime(int n){
    int i=3;
    int z=0;
    if(n==2){
        return 1;
    }
    else if(n%2==0){
        return 0;
    }
    else{
        for(i;i*i<n;i+=2){
            if(n%i==0){
                z++;
                break;
            }
        }
        if(z==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
// int is_prime(int n){
//     int fast_num =n;
//     if(n==0 ||n==1){
//         return 0;
//     }
//     else if(n==2){
//         return 1;
//     }
//     else{
//         for(int i=2;i<fast_num;i++){
//             if(n%i==0){
//                 return 0;
//             }
//             fast_num=n/i;
//         }
//     }
//     return 1;
// }
int is_prime_test(void) {
  return ! is_prime(2147483541) &&
           is_prime(2147483543) &&
         ! is_prime(2147483545) &&
         ! is_prime(2147483547) &&
           is_prime(2147483549);
}
int main(){
    clock_t start, end;
    start = clock();
    printf("%i\n",is_prime_test());
    end =clock();
    printf("%.2f秒かかりました\n",(double)(end - start)/CLOCKS_PER_SEC);
}