#include <iostream>
#include <cmath>

using namespace std;
int factorials (x){
  double n, f, xs, fs;
  std::cout << "Enter the factorial number" << '\n';
  std::cin >> x;
  xs = n*n;

  f = 1;
  fs = 1;
  while (x>0) {
    f = n*f;
    fs = xs*fs;
    xs = xs - 1;
    n = n - 1;
  }

return f;
return fs;
}

int main() {
int F, FS;
F=factorials(8)

  std::cout << "The Factorial is: " << F << '\n' << endl;
  std::cout << "The Square Factorial is: " << fs << '\n'<< endl;

  return 0;
}
