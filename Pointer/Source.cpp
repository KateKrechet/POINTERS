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
	//имя массива - указатель на массив, содержит адрес нулевого элемента массива
	cout << "Адрес нулевого элемента массива "<<arr << endl;
	cout << "Значение нулевого элемента массива с использованием оператора разименовывания  " << *arr << endl;
	cout << "Вывод адресов элементов массива" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i<< "\t";
	}
	cout << endl;
	cout << "Вывод элементов массива по адресу" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
	/*Адрес оперативной памяти - это число длиной 4 байта, означ.порядковый номер байта в оперативной памяти.
	Адреса обычно записывают в 16 - ричной системе счисления.
	Поэтому максимальный объем памяти, который можно реализовать 4-байтовым адресом - это (16)^8 или 2^32
	        максимальный объем памяти, который можно реализовать 8-байтовым адресом - это ((16)^8)^2 или 2^64*/


}