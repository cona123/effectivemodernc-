#include <vector>
#include <array>
#include <iostream>
template<typename T, std::size_t N> 
constexpr std::size_t arraySize(T (&)[N]) noexcept {
  return N;
}

int main() {
  int keyvalue[] = {1,2,3,4,5,6};
  std::vector<int> temp(arraySize(keyvalue));
  std::cout<< temp.size() <<std::endl;
  std::array<int, arraySize(keyvalue)> temparr;
  std::cout<< temparr.size()<<std::endl;
}
