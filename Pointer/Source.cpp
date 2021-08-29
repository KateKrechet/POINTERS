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
	cout << a << endl;// Вывод значения переменной на экран
	cout << &a << endl;//Взятие адреса переменной a прямо при выводе
	cout << pa << endl;//Вывод адреса переменной а, хранящегося в указателе pa
	cout << *pa << endl;//Открывает доступ к значению по адресу
	int* pb;//Объявление и инициализация указателя, не знаем адрес чего положим
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