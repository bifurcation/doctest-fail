#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include <add/add.h>

TEST_CASE("Example") {
  REQUIRE(add(1, 1) == 2);
}
