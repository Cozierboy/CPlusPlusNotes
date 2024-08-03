#include <iostream>

int main(int argc, char *argv[])
{
  //1. 加减乘除
  int a1 = 10;
  int b1 = 3;

  std::cout << a1 + b1 << std::endl;
  std::cout << a1 - b1 << std::endl;
  std::cout << a1 * b1 << std::endl;
  std::cout << a1 / b1 << std::endl;  
  
  //两个整数相除依然是整数，将小数部分去除
  //两个数相除，除数不能为0

  //两个小数可以相除
  double d1 = 0.5;
  double d2 = 0.22;
  std::cout << "d1 / d2 = " << d1 / d2 << std::endl;

  //2. 取模运算 就是取余数
  //两个数相除 除数不为0 无法进行取模运算
  //两个小数无法进行取模运算
  //只有整数才可以进行取模运算

  int a2 = 10;
  int b2 = 20;
  std::cout << "a2 % b2 = " << a2 % b2 << std::endl;

  //3. 前置递增
  int a = 10;
  ++a; //让变量+1
  std::cout << "a = " << a << std::endl;

  //4. 后置递增
  int b = 10;
  b++; //让变量＋1
  std::cout << "b = " << b << std::endl;
  //5. 前置和后置递增的区别
  //前置递增 先让变量＋1 然后进行表达式运算
  int a3 = 10;
  int b3 = ++a3 * 10;
  std::cout << "a3 = " << a3 << std::endl;
  std::cout << "b3 = " << b3 << std::endl;

  //后置递增 先进行表达式运算 后让变量＋1
  int a4 = 10;
  int b4 = a4++ * 10;
  std::cout << "a4 = " << a4 << std::endl;
  std::cout << "b4 = " << b4 << std::endl;
  return 0;
}
