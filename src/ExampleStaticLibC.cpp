#include <string>
#include "ExampleStaticLibC/ExampleStaticLibC.hpp"
#include "ExampleStaticLibB/ExampleStaticLibB.hpp"
#include "ExampleStaticLibA/ExampleStaticLibA.hpp"


namespace libC {

  std::string getString() { return libA::getString(); }

  int factorial(int input) noexcept {
    return libB::factorial(input);
  }

}  // namespace csl
