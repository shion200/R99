#include <stdio.h>
void st_push(int x) {
    static int a[100];
    int i;
    // for (int j = 0; j<=100; j++) {
    //     x[j] = 0;
    // }
    for (i=0; a[i]!='\0';i++) {
        printf("%d",i);
    }
    a[i+1] = x;
}
int st_pop(void) {
    static int a[100];
    int i;
    int ans;
    for (i = 0; a[i] != '\0'; i++) {

    }
    ans = a[i];
    a[i] = 0;
    return ans; 

}
void st_print(void) {
     static int a[100];
    int i;
    for (i = 0; a[i] != '\0'; i++) {

    }
    printf("%d",a[i]);
}
int main() {
    st_push(3);
    st_push(4);
    st_push(10);
    st_pop();
    st_print();
}
// void st_print_all(void);