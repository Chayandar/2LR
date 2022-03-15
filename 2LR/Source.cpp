#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

struct MyList
{
	MyList* next = NULL;								//указатель на следующий элемент
	string field;										//данные
};

void main() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int size;											//размер

	cout << "Введите кол-во элементов: "; cin >> size;	//вводим кол-во элементов

	system("cls");										//очистка консоли

	string str;

	MyList* head = NULL;								//обявляем голову списка
	head = new MyList;

	system("cls");										//очистка консоли

	cout << "1)Стек\n2)Очередь\nВыбор: ";				//выбор стека или очереди
	int choice; cin >> choice;							//ввод выбора										

	system("cls");										//очистка консоли

	switch (choice)
	{
	case(1):										//выбор стека
	{

		for (int i = 0; i < size; i++)
		{
			cout << "Введите " << i + 1 << " элемент списка: "; cin >> str;     //ввод элемента

			MyList* temp = new MyList;				//создаем новый элемент
			temp->field = str;						//записываем введенный элемент в поле списка
			if (head)								//если список не пуст
				temp->next = head;					//переходим к голове списка
			head = temp;							//записываем элемент
			temp = temp->next;						//переходим к следующему

			if (i == size - 1)						//вывод элементов списка
			{
				temp = head;						//переходим к голове списка
				for (int j = 0; j < size; j++)
				{
					cout << temp->field << endl;	//вывод
					temp = temp->next;				//переход к следующему
				}
			}
		}
		break;										//выход из кейса
	}
	case(2):										//выбор очереди
	{
		MyList* temp = new MyList;
		temp = head;
		for (int i = 0; i < size; i++)
		{
			cout << "Введите " << i + 1 << " элемент: "; cin >> str;    //вводит остальные элементы списка

			temp->field = str;						//записываем элемент с поле списка	
			temp->next = new MyList;				//создаем новый элемент
			temp = temp->next;						//переходим к следующему элементу

			if (i == size - 1)						//вывод элементов
			{
				temp = head;						//переходим к голове списка
				for (int j = 0; j < size; j++)
				{
					cout << temp->field << endl;	//вывод
					temp = temp->next;				//переход к следующему
				}
			}
		}
		break;										//выход из кейса
	}
	}
	_getch();											//ожидания нажатия для выхода
}


//
//struct MyList
//{
//	MyList* next = NULL;
//	MyList* prev = NULL;
//	string data;
//};
//
//void main()
//{
//	setlocale(LC_ALL, "rus");
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	int size;
//	int choice;
//	int counter = 1;
//	string str;
//
//	cout << "Введите кол-во элементов списка: "; cin >> size;
//
//
//	MyList* head = NULL;
//	head = new MyList;
//	MyList* pointer = head;
//
//	system("cls");
//
//	cout << "Введите 1-й элемент списка: "; cin >> str;
//
//	pointer->data = str;
//
//	for (int i = 1; i < size; i++)
//	{
//		while (true)
//		{
//			if (pointer->next == NULL)
//				break;
//			pointer = pointer->next;
//			counter++;
//		}
//		cout << "Введите " << i + 1 << "-й элемент списка: "; cin >> str;
//		pointer->next = new MyList;
//		pointer->next->prev = pointer;
//		pointer = pointer->next;
//		pointer->data = str;
//
//	}
//
//	system("cls");
//
//	pointer = head;
//
//	while (true)
//	{
//		cout << "Сейчас выбран " << counter << "-й элемент списка : " << "[" << pointer->data << "]" << endl;
//		cout << "|-----------------------------------|" << endl;
//		cout << "|1)Выбрать следующий элемент списка |\n|2)Выбрать предыдущий элемент списка|" << "\n|-----------------------------------|" << "\nВыбор: "; cin >> choice;
//
//		system("cls");
//
//		switch (choice)
//		{
//		case(1):
//		{
//			if (pointer->next == NULL)
//			{
//				cout << "|------------------------------|" << endl;
//				cout << "|ERROR: Следующего элемента нет|";
//				cout << "\n|------------------------------|" << endl;
//				char p = _getch();
//
//				system("cls");
//				continue;
//			}
//			pointer = pointer->next;
//			counter++;
//			break;
//		}
//		case(2):
//		{
//			if (pointer->prev == NULL)
//			{
//				cout << "|-------------------------------|" << endl;
//				cout << "|ERROR: Предыдущего элемента нет|";
//				cout << "\n|-------------------------------|" << endl;
//				_getch();
//
//				system("cls");
//				continue;
//			}
//			pointer = pointer->prev;
//			counter--;
//			break;
//		}
//		}
//		system("cls");
//	}
//	_getch();
//}
//
//
