#include "fuzztest/fuzztest.h"
#include "gtest/gtest.h"
#include "absl/debugging/failure_signal_handler.h"
#include "absl/debugging/symbolize.h"

#include <ExampleStaticLibC/ExampleStaticLibC.hpp>
#include <cstdlib>

TEST(FactorialFuzzTestSuite, factorial2) {
  EXPECT_EQ(libC::factorial(2), 2);
}

void factorialAlwaysGreaterThan0OrInvalid(int i) {
  auto res = libC::factorial(i);
  EXPECT_TRUE(res > 0 || res == -1 );
}

FUZZ_TEST(FactorialFuzzTestSuite, factorialAlwaysGreaterThan0OrInvalid);


void factorialWithNegativeInput(int i) {
  auto res = libC::factorial(-i);
  EXPECT_TRUE(res > 0 || res == -1 );
}

FUZZ_TEST(FactorialFuzzTestSuite, factorialWithNegativeInput);
