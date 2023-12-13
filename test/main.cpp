#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

TEST_CASE("Example") {
  auto one = size_t(1);
  auto two = 1 + 1;
  REQUIRE(two == 2);
}
