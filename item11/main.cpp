#include<iostream>
bool islucky(int number) {
  std::cout<<number << " is lucky"<<std::endl;
}

bool islucky(char) = delete;
bool islucky(bool) = delete;
bool islucky(double) = delete;

int main() {
  islucky(2);
  //islucky(true); // use of deleted function ‘bool islucky(bool)’
  //islucky(2.2); //use of deleted function ‘bool islucky(double)’
}