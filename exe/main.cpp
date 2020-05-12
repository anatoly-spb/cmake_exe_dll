#include <iostream>
#include "dll1.h"
#include "dll2.h"

int main() {
  std::cout << dll1::boo(10.0) << std::endl;
  std::cout << dll1::foo() << std::endl;
  std::cout << dll2::foo() << std::endl;
}