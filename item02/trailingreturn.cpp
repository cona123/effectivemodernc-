#include<iostream>
#include<vector>
auto getvalue(std::vector<int> a, int i) -> decltype(a[i]) 
{
  return a[i];
}

int main()
{
  std::vector<int> a{1,2,3,4};
  std::cout<< getvalue(a,2)<<std::endl;
}