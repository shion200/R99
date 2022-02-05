#include <stdio.h>
int lines(void) {
    int ans = 0;  
    char word[100];
    FILE *fp = fopen("numbers.txt","r");
    while (fscanf(fp,"%s",word) == 1) {
       ans++;
    }
    return ans;
}
int lines_test(void) {
  return lines() == 2345;
}
int main() {
    printf("%i",lines_test());
}