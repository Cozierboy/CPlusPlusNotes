#include <iostream>

//常量的定义方式
//1. #define 宏常量
//2. const 修饰的变量

//1. #define 宏常量
#define Day 7

int main(int argc, char *argv[])
{
  std::cout << "一周总共有：" << Day << "天" << std::endl;

//2. const 修饰的变量
  const int month = 12;
  std::cout << "一年总共有：" << month << "月" << std::endl;
  return 0;
}

