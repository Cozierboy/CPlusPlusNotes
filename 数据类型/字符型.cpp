#include <iostream>

int main(int argc, char *argv[])
{
  //1. 字符型变量的创建方式
  char ch = 'A';
  std::cout << ch << std::endl;

  //2. 字符型变量所占用的内存大小
  std::cout << "char字符型变量占用内存为："  << sizeof(ch) << std::endl;
  
  //3. 字符型变量常见错误
  //a. 创建字符型变量时，要用单引号
  //b. 创建字符型变量时，单引号内只能有一个字符

  //4. 字符型变量对应的ASCII编码
  std::cout << (int)ch << std::endl;
  return 0;
}
