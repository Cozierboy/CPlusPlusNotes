#include <iostream>

int main(int argc, char *argv[])
{
  //默认情况下会显示6位有效数字
  //1. 单精度 float 7位有效数字
  float f1 = 3.1415926f;
  std::cout << "f1 = " << f1 << std::endl;

  //2. 双精度 double 15-16位有效数字
  double d1 = 3.1415926;
  std::cout << "d1 = " << d1 << std::endl;

  //统计float和double占用内存空间
  std::cout << "float占用的内容空间为" << sizeof(f1) << "个字节" << std::endl;
  std::cout << "double占用的内容空间为" << sizeof(d1) << "个字节" << std::endl;
  
  //科学计数法
  float f2 = 3e2; //3 * 10^2
  std::cout << "f2 = " << f2 << std::endl;

  float f3 = 3e-2; //3 * 0.1^2
  std::cout << "f3 = " << f3 << std::endl;
  return 0;
}
