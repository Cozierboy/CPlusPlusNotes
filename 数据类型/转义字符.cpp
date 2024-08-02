#include <iostream>

int main(int argc, char *argv[])
{
  //转义字符

  //1. 换行符 \n
  std::cout << "hello \nworld!" << std::endl;

  //2. 反斜杠 \\ //`
  std::cout << "\\" << std::endl;

  //3. 水平制表符 \t
  std::cout << "aaaaaaaa\tbbbb" << std::endl;
  std::cout << "aaaaaaa\tbbbb" << std::endl;
  std::cout << "aaaaaaaaa\tbbbb" << std::endl;
  return 0;
}
