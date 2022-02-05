#include<stdio.h>
int is_teenage(int y){
    if(13<=y && y<=19) printf("真\n");
    else printf("偽\n");
}
int is_teenage_test(void) {
  return ! is_teenage(10) &&
    ! is_teenage(11) &&
    is_teenage(13) &&
    is_teenage(19) &&
    ! is_teenage(20) &&
    ! is_teenage(100);
}
int main(){
    printf("%c",is_teenage_test());
    return 0;
}