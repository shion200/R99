#include <stdio.h>
#include <stdlib.h>
int lines(void) {
    int ans = 0;  
    char word[100];
    FILE *fp = fopen("numbers.txt","r");
    while (fscanf(fp,"%s",word) == 1) {
       ans++;
    }
    return ans;
}
int nth(int n) {
    int i = 0;
    int ans;
    char word[100];
    if (n > lines() || n == 0) {
        return -1;
    }

    FILE *fp = fopen("numbrs.txt","r");
    if ((fp = fopen("numbers.txt","r")) == NULL) {
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        fscanf(fp,"%s",word);
        ans = atoi(word); 
    }
    fclose(fp);
    return ans;
}
int sum10(void) {
    int ans = 0;
    for (int i = 1; i <= 10; i++) {
        ans += nth(i);
    }
    return ans;
}
int sum10_test(void) {
  return sum10() == 72076;
}
int main() {
    printf("%i",sum10_test());
}