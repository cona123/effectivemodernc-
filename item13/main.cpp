#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
  std::vector<int> values{1,2,3,4,5};
  auto it = std::find(values.cbegin(), values.cend(), 4);
  values.insert(it, 355);
  std::for_each(values.begin(), values.end(), [&](const int &i) {
    std::cout<< i<< " ";
  });
  std::cout<<std::endl;
}