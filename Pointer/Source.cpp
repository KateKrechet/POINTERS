#include<iostream>
using namespace std;
//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;// ����� �������� ���������� �� �����
	cout << &a << endl;//������ ������ ���������� a ����� ��� ������
	cout << pa << endl;//����� ������ ���������� �, ����������� � ��������� pa
	cout << *pa << endl;//��������� ������ � �������� �� ������
	int* pb;//���������� � ������������� ���������, �� ����� ����� ���� �������
	int b = 3;
	pb = &b;
#endif // POINTERS_BASICS
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << "\t";
	}
	cout << endl;


}