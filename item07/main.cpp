#include<iostream>
#include<vector>
class A {
  public:
    A() {
      std::cout<<"constructed no param"<<std::endl;
    }
    A(std::initializer_list<int> li) {
      std::cout<< "constructed with initializer_list" << std::endl;
    }
    A(int a) {
      std::cout<< "constructed with int" << std::endl;
    }
    A(std::initializer_list<float> li) {
      std::cout<< "constructed with initializer_list float" << std::endl;
    }
    A(double a) {
      std::cout<< "constructed with double" << std::endl;
    }
};

int main()
{
  A a;
  A b(); // declare a function
  A c{}; //param is empty, just like line11 ,not use initializer_list
  A d{12}; // constructed with initializer_list
  double db = 1.00;
  //A e{db}; // error: call of overloaded ‘A(<brace-enclosed initializer list>)’ is ambiguous
  std::vector<int> avec(2,1);
  std::vector<int> bvec{2,1};
  for(auto i : avec) {
    std::cout<<i;    // 1 1
  }
  std::cout<<std::endl;
  for(auto i : bvec) {
    std::cout<<i;   // 2 1
  }
  std::cout<<std::endl;
}