#include<stdio.h>
//約数の数を返す関数。
int divisors(int n){
    int i = 1;
    int y = 0;
    for(i;i <= n;i++){
        if(n%i == 0){
            y++;
        }    
    }
    return y;
}
//約数の一番大きな数を返す関数。
int more_divisors_p(int n){
    int i=1;
    int y=0;
    for(i;i<=n;i++){
        if(n%i==0){
            y+=1;
        }    
    }
    return y;
}
int most_divisors(int n){
    int x=0;
    int div=0;
    int z=0;
    for(z;z<n;z++){
        if(x<more_divisors_p(z)){
            x=more_divisors_p(z);
            div=z;
        }
    }
    return div;
}
int p42(int n){
    int x = divisors(most_divisors(n));
    int group[x];
    int group2[x];
    for(int z = 0;z<=x;z++){
        group[z] = 0;
        group2[z] = 0;
    }
  
    for(int i = 1; i <= n;i++){
        group[divisors(i)]++;
        group2[divisors(i)] += i; 
    }
    int max = 0;
    int y = 0;
    for(int j = 1;j <= x; j++){
        if(max <= group[j]){
            max = group[j];
            y = j;
        }
    }
    return group2[y];
}
int p42_test(void) {
  return p42(10)== 17 &&
    p42(100) == 1655 &&
    p42(1000) == 143303;
}
// p42(10000) == 12686921
int main(){
    printf("%d",p42_test());
    return 0;
}