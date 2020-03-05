#include <iostream>
#include <vector>
#include <string>
#include <tuple>
  enum class Color {balck, white, red};
  std::size_t primefactors(std::size_t x) {
    return x;
  }
  enum userinfofields { name, email, reputation};
int main()
{
  Color c = Color::red;
  primefactors(static_cast<int>(c));
  using userinfo = std::tuple<std::string, std::string, std::size_t>;
  userinfo uinfo{"a","b@c",12};
  auto val = std::get<email>(uinfo);
  std::cout<< val<<std::endl;
  return 0;
}