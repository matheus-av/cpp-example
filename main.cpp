#include <iostream>
#include "library_a.hpp"
#include "library_b.hpp"

int main() {
  std::cout << a::library_function();
  std::cout << b::library_function();
  return 0;
}