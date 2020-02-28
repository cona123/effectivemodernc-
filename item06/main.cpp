#include <iostream>
#include <vector>
void trybool(bool& val) {
  std::cout<< "trybool" <<std::endl;
}

int main()
{
  std::vector<bool> boolvec{true, false, true};
  //auto i = boolvec[0]; // i is i is a right value std::vector<bool>::reference
  //trybool(i);// 
  auto i = static_cast<bool>(boolvec[0]); //i is bool
  trybool(i);  //right

  auto index = static_cast<int>(0.5 * boolvec.size()); // code show double cast int

}