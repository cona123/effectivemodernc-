#include <iostream>
#include <memory>
#include <mutex>
template<typename FuncType,
        typename MuxType,
        typename PtrType>
auto lockAndCall(FuncType func, MuxType& mutex1, PtrType ptr)->decltype(func(ptr)) {  // mutex1 must use &
  using MuxGuard = std::lock_guard<MuxType>;
  MuxGuard g(mutex1);
  return func(ptr);
}

int f1(std::shared_ptr<int> spw) {
  std::cout<< "f1" <<std::endl;
  return 1;
}

double f2(std::unique_ptr<int> spw) {
  std::cout<<"f2" <<std::endl;
  return 2.0;
}

bool f3(int* pw) {
  std::cout<<"f3" <<std::endl;
  return true;
}

int main() {
  std::mutex fm1, fm2, fm3;
 // std::cout<< lockAndCall(f1, fm1, 0);  // error
 // std::cout<< lockAndCall(f2, fm2, NULL); // error
  std::cout<< lockAndCall(f3, fm3, nullptr);

  return 0;
}