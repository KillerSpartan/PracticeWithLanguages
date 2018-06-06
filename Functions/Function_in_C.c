#include "stdio.h"

int addition (a, b){
  int s;
  s=a+b;
  return s;
}

int main(){

  int z;
  z=addition(5,3);
  printf("The result is %d\n", z);
}
