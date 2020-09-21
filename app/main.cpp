// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#endif

#include <iostream>
#include <stdlib.h>

#include "exampleConfig.h"
#include "prime.h"

/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */

long n_th_prime(int n);
void print_res(int n);

int main() {
  std::cout << "C++ Prime Engine v"
            << PROJECT_VERSION_MAJOR
            << "."
            << PROJECT_VERSION_MINOR
            << "."
            << PROJECT_VERSION_PATCH
            << "."
            << PROJECT_VERSION_TWEAK
            << std::endl;

  print_res(42);

  return 0;
}

void print_res(int n) {
  std::cout << "Le " << n << "ième nombre premier est " << n_th_prime(n) << std::endl;
}

long n_th_prime(int n) {
  int cpt = 0;
  int i = 0;
  while(cpt != n) {
    i += 1;
    if(is_prime(i)) {
      cpt += 1;
      //std::cout << i << " " << cpt << std::endl;
    }
  }
  return i;
}