#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // This is the problematic line; using std::vector<bool> can cause unexpected behavior
  // std::vector<bool> boolVector = {true, false, true, true, false};

  // Solution: Use std::vector<char> or a similar type which doesn't suffer from this issue
  std::vector<char> boolVector = {1, 0, 1, 1, 0};

  auto it = std::find(boolVector.begin(), boolVector.end(), 0);
  if (it != boolVector.end()) {
    std::cout << "Found false at index: " << std::distance(boolVector.begin(), it) << std::endl;
  } else {
    std::cout << "false not found." << std::endl;
  }

  return 0;
}
