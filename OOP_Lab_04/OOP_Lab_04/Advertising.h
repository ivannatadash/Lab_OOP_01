//�������� ������� ���� �������(��������� ��������, ����� �������). +
//�������� �������� ���� ������� �� ���������Ͳ(��������� ����� ����������,+
//��������� 1 ������, ������� ������ �������� �����, ������� �� ����� 1 �������). +
//��� �������� ����� ��� ����������� � �������� ������� ��������� ������� ���������
//� ������������ �� �� ����������, ��������� ������� �������.

#pragma once
#include <iostream>

using namespace std;

class Advertising
{
  private:
	
	char* customer;
	
	char* advertising_title;

  public:
	 Advertising(const char* customer, const  char* advertising_title);
	 Advertising();
	~Advertising();

	const char* GetCustomer() const;
	const char* GetAdvertising_title() const;

	friend ostream& operator<<(ostream& out, const Advertising&);
};