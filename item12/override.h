#include <iostream>
class Base {
  public:
    virtual void mf1() const {
      std::cout<<"base::mf1"<<std::endl;
    }
    virtual void mf2(int x) {
      std::cout<<"base::mf2"<<std::endl;
    }
    virtual void mf3()& {
      std::cout<<"base::mf3"<<std::endl;
    }
    virtual void mf4() const {
      std::cout<<"base::mf4"<<std::endl;
    }
};

class Derived: public Base {
  public:
    virtual void mf1() const override {
      std::cout<<"derived::mf1" <<std::endl;
    }
    virtual void mf2(int x) override {
      std::cout<< "derived::mf2" <<std::endl;
    }
    virtual void mf3()& override {
      std::cout<< "derived::mf3" <<std::endl;
    }
    virtual void mf4() const override {
      std::cout<< "derived::mf4" <<std::endl;
    }
};