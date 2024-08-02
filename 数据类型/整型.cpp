#include <iostream>

int main(int argc, char *argv[])
{
  //整型
  //1. 短整型
  short num1 = 32768;

  //2. 整型
  int num2 = 32768;

  //3. 长整型
  long num3 = 10;

  //4. 长长整型
  long long num4 =10;

  std::cout << "num1 = " << num1 << std::endl;
  std::cout << "num2 = " << num2 << std::endl;
  std::cout << "num3 = " << num3 << std::endl;
  std::cout << "num4 = " << num4 << std::endl;
  
  //可以利用sizeof求出数据类型占用内存大小
  //语法：sizeof（数据类型 / 变量）
  std::cout << "short占用内存空间为：" << sizeof(num1) << std::endl;

  std::cout << "int占用内存空间为：" << sizeof(num2) << std::endl;

  std::cout << "long占用内存空间为：" << sizeof(num3) << std::endl;

  std::cout << "long long占用内存空间为：" << sizeof(num4) << std::endl;
  return 0;
}
