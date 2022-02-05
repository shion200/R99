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
int nth_test(void) {
  return nth(0) == -1 &&
    nth(10) == 6686 &&
    nth(100) == 9544 &&
    nth(1000) == 6009 &&
    nth(2000) == 8885 &&
    nth(3000) == -1;
}
int main() {
    printf("%i",nth_test());
}