// Sum.cpp
// Ҫ��ʹ���������������������Ѽ��������
// --------------------------------------
// Copyright (c) Yau-Zen Chang (2002.01-) 
// All Rights Reserved.
// ����ʽ��Ȩ���� ��ҫ��
// ʹ��ʱ��������.
// --------------------------------------
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int x;   // ��һ����������
  int y;   // �ڶ�����������
  int Sum; // ���������ĺ�

  cout << "�������һ������\n";
  cin >> x;
  cout << "������ڶ�������\n";
  cin >> y;
  Sum = x + y;
  cout << "�����������ĺ���: " << Sum << endl;
  return 0;
}