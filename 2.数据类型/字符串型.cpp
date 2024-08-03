#include <iostream>
#include <string> //用C++风格字符串时，需要包含这个头文件

int main()
{
  //1. C风格字符串
  //注意事项1 char 字符串名 []
  //注意事项2 等号后面 要用双引号 包含起来字符串
  char str1[] = "hello world";
  std::cout << str1 << std::endl;
  
  //2. C++风格字符串
  //包含一个头文件 #include <string>
  std::string str2 = "hello world";
  std::cout << str2 << std::endl;
  return 0;
}
