#include "doctest.h"
#include "prime.h"

TEST_CASE("Test 0 is not prime")
{
  CHECK(is_prime(0) == false);
}

TEST_CASE("Test 1 is not prime")
{
  CHECK(is_prime(1) == false);
}

TEST_CASE("Test 2 is prime")
{
  CHECK(is_prime(2) == true);
}

TEST_CASE("Test 11 is prime")
{
  CHECK(is_prime(2) == true);
}
