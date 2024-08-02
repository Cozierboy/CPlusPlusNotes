#include <iostream>

int main(int argc, char *argv[])
{
  //1. 创建bool数据类型
  bool flag = true;
  std::cout << flag << std::endl;

  flag = false;
  std::cout << flag << std::endl;

  //本质上 1表示真 0表示假
  

  //2. 查看bool类型所占用的内存
  std::cout << "bool类型所占用的空间为：" << sizeof(flag) << std::endl;
  return 0;
}
