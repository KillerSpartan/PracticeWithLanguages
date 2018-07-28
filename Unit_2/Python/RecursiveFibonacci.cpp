#include <iostream>
#include <time.h>
using namespace std;

int fib(int x) {
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return fib(x-1)+fib(x-2);
}

int main(void) {
  //printf("%d\n", fib(3));
  clock_t tStart = clock();

  for(int i = 0; i < 32; i++) {
    std::cout << fib(i) << endl;
    //std::cout << fib(i) << '\n';
}

printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}
