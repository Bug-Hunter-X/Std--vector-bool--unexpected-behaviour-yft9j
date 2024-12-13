#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  std::cout << "Before change: " << vec[0] << std::endl; // This might produce an unexpected result
  vec[0] = false;
  std::cout << "After change: " << vec[0] << std::endl; //This might produce an unexpected result

  std::vector<int> vec2; // Better approach to avoid unexpected behavior
  vec2.push_back(1);
  std::cout << "Before change (int): " << vec2[0] << std::endl; 
  vec2[0] = 0;
  std::cout << "After change (int): " << vec2[0] << std::endl;

  return 0;
}
