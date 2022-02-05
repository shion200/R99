#include <stdio.h>
int is_even(int x){
    return x%2==0;
}
int is_even_test(void) {
  return is_even(2) &&
    is_even(100) &&
    is_even(-4);
}

int main(void) {
  printf("%i\n",is_even_test());
  return 0;
}