#include <vector>
#include <iostream>
class widget {
  public:
    using datatype = std::vector<int>;
    datatype& data() & {
      std::cout<<"datatype&"<<std::endl;
      return values;
    }
    datatype& data() && {
      std::cout<<"datatype&&"<<std::endl;
      return values;
    }
  private:
    datatype values;
};

widget makedata() {
  widget w;
  return w;
}