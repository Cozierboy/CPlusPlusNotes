#include <iostream>

int main(int argc, char *argv[])
{
  int a = 10;
  
  //逻辑运算符 非 !
  //在C++中 除了0 都为真
  std::cout << !a << std::endl; //0
  std::cout << !!a << std::endl;//1
  
  //逻辑运算符 与 &&
  //相同为1 相异为0
  std::cout << (a && !a) << std::endl;//0
  std::cout << (a && a) << std::endl; //1

  //逻辑运算符 或 ||
  //有1为1
  std::cout << (a || a) << std::endl;  //1
  std::cout << (a || !a) << std::endl; //1
  std::cout << (!a || !a) << std::endl;//0
  return 0;
}
