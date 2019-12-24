// SDT.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include "Transport.h"
#include "Train.h"
#include "Airplane.h"
#include "Element.h"
#include "Array.h"

void aoArray(Array* arr, ofstream& out);

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "\nIncorrect command line!\nWaited: command in_file out_file" << endl;
		exit(1);
	}

	ifstream in(argv[1]); 
	ofstream out(argv[2]);

	cout << "Start" << endl;

	Array A;
	A.In(in);
	out << "Fill";
	aoArray(&A, out);
	A.Clear();
	out << "\n\nEmpty" << endl;

	cout << "Finish" << endl;

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
