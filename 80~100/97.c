#include <stdio.h>
int a[100];
int s = 1;
void st_push(int x) {
    int i;
    a[0] = '|';
    for (i=0; a[i]!='\0';i++) {
        ;
    }
    a[s] = x;
    s++;
}
int st_pop(void) {
    int i;
    int ans;
    for (i = 0; a[i] != '\0'; i++) {
        ;
    }
    ans = a[i-1];
    a[i-1] = '\0';
    return ans;

}
void st_print(void) {
    int i;
    for (i = 0; a[i] != '\0'; i++) {
        ;
    }
    printf("%d\n",a[i-1]);
}
void st_print_all(void) {
    int i;
    printf("%c",a[0]);
    for (i = 1; a[i] != '\0'; i++) {
        printf("%d",a[i]);
    }
    printf(">");
}
int main() {
    st_push(3);
    st_push(4);
    st_push(10);
    printf("%d\n",st_pop());
    st_print();
    st_print_all();
}
// void st_print_all(void);