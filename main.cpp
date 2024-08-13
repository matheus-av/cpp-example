#include <iostream>
#include "library_a.hpp"
#include "library_b.hpp"

int main() {
  std::cout << library_a_namespace::library_function();
  std::cout << library_b_namespace::library_function();
  return 0;
}