#include <iostream>

int main(int argc, char *argv[])
{
  int a = 10;
  int b = 10;
  int c = 12;
  
  // ==
  std::cout << (a == b) << std::endl;

  // !=
  std::cout << (a != c) << std::endl;

  // >
  std::cout << (a < c) << std::endl;

  // <
  std::cout << (a > c) << std::endl;

  // >=
  std::cout << (a >= c ) << std::endl;

  // <=
  std::cout << (a <= c) << std::endl;
  return 0;
}
