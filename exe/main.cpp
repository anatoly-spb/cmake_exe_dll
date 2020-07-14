#include <iostream>
#include "dll1.h"
#include "dll2.h"

int main() {
  dll1::knowhow<int> a;
  a.foo();
  std::cout << dll1::boo(10) << std::endl;
  std::cout << dll1::foo() << std::endl;
  std::cout << dll2::foo() << std::endl;
}