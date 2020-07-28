// Sum.cpp
// 要求使用者输入两个整数，并把计算结果输出
// --------------------------------------
// Copyright (c) Yau-Zen Chang (2002.01-) 
// All Rights Reserved.
// 本程式版权属于 张耀仁
// 使用时必需声明.
// --------------------------------------
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int x;   // 第一个输入整数
  int y;   // 第二个输入整数
  int Sum; // 两个整数的和

  cout << "请输入第一个整数\n";
  cin >> x;
  cout << "请输入第二个整数\n";
  cin >> y;
  Sum = x + y;
  cout << "这两个整数的和是: " << Sum << endl;
  return 0;
}
