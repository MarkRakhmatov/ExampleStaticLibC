#include <string>
#include "ExampleStaticLibC/ExampleStaticLibC.hpp"
#include "ExampleStaticLibB/ExampleStaticLibB.hpp"
#include "ExampleStaticLibA/ExampleStaticLibA.hpp"


namespace libC {

  std::string getString() { return "cpp static lib example"; }

  int factorial(int input) noexcept {
    return libB::factorial(input);
  }

  int uncoveredFunction(int value) noexcept {
    return csl::uncoveredFunction(value);
  }

}  // namespace csl
