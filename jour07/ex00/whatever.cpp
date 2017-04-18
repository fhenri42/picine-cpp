#include <iostream>

template <typename T >
void swap ( T &k, T  &r) {
  T const tmp = k;
  k = r;
  r = tmp;
  return;
}


template <typename T >
T const &max(T  & x, T  & y) {
  return (x >= y ? x : y);
}

template <typename T >
T const &min(T  & x, T  & y) {
  return (x <= y ? x : y);
}


int main () {

  int a = 2;
  int b = 3;
  swap( a, b );
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
  std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


  return 0;
}
