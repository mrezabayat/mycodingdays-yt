#include <iostream>
#include <limits>

int main() {
  int maxInt = std::numeric_limits<int>::max();
  int minInt = std::numeric_limits<int>::min();

  std::cout << "Max int value: " << maxInt << std::endl;
  std::cout << "Max int value + 1: " << maxInt + 1 << std::endl;

  std::cout << "Min int value: " << minInt << std::endl;
  std::cout << "Min int value - 1: " << minInt - 1 << std::endl;

  return 0;
}
