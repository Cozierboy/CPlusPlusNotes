#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
  //1. 整型
  int a = 0;
  std::cout << "请给整型变量a赋值" << std::endl;
  std::cin >> a;
  std::cout << "整型变量a = " << a << std::endl;

  //2. 浮点型
  float f = 3.14f;
  std::cout << "请给浮点型变量f赋值" << std::endl;
  std::cin >> f;
  std::cout << "浮点型变量f = " << f << std::endl;

  //3. 字符型
  char ch = a;
  std::cout << "请给字符型变量ch赋值" << std::endl;
  std::cin >> ch;
  std::cout << "字符型变量ch = " << ch << std::endl;
  
  //4. 字符串型
  std::string str = "hello";
  std::cout << "请给字符串型变量str赋值" << std::endl;
  std::cin >> str;
  std::cout << "字符串型变量str = " << str << std::endl;

  //5. 布尔类型
  bool flag = false;
  std::cout << "请给布尔类型变量flag赋值" << std::endl;
  std::cin >> flag;
  std::cout << "布尔类型变量flag = " << flag << std::endl;
  return 0;
}
