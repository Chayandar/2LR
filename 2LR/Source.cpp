#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

struct MyList
{
	MyList* next = NULL;								//��������� �� ��������� �������
	string field;										//������
};

void main() {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int size;											//������

	cout << "������� ���-�� ���������: "; cin >> size;	//������ ���-�� ���������

	system("cls");										//������� �������

	string str;

	MyList* head = NULL;								//�������� ������ ������
	head = new MyList;

	system("cls");										//������� �������

	cout << "1)����\n2)�������\n�����: ";				//����� ����� ��� �������
	int choice; cin >> choice;							//���� ������										

	system("cls");										//������� �������

	switch (choice)
	{
	case(1):										//����� �����
	{

		for (int i = 0; i < size; i++)
		{
			cout << "������� " << i + 1 << " ������� ������: "; cin >> str;     //���� ��������

			MyList* temp = new MyList;				//������� ����� �������
			temp->field = str;						//���������� ��������� ������� � ���� ������
			if (head)								//���� ������ �� ����
				temp->next = head;					//��������� � ������ ������
			head = temp;							//���������� �������
			temp = temp->next;						//��������� � ����������

			if (i == size - 1)						//����� ��������� ������
			{
				temp = head;						//��������� � ������ ������
				for (int j = 0; j < size; j++)
				{
					cout << temp->field << endl;	//�����
					temp = temp->next;				//������� � ����������
				}
			}
		}
		break;										//����� �� �����
	}
	case(2):										//����� �������
	{
		MyList* temp = new MyList;
		temp = head;
		for (int i = 0; i < size; i++)
		{
			cout << "������� " << i + 1 << " �������: "; cin >> str;    //������ ��������� �������� ������

			temp->field = str;						//���������� ������� � ���� ������	
			temp->next = new MyList;				//������� ����� �������
			temp = temp->next;						//��������� � ���������� ��������

			if (i == size - 1)						//����� ���������
			{
				temp = head;						//��������� � ������ ������
				for (int j = 0; j < size; j++)
				{
					cout << temp->field << endl;	//�����
					temp = temp->next;				//������� � ����������
				}
			}
		}
		break;										//����� �� �����
	}
	}
	_getch();											//�������� ������� ��� ������
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
//	cout << "������� ���-�� ��������� ������: "; cin >> size;
//
//
//	MyList* head = NULL;
//	head = new MyList;
//	MyList* pointer = head;
//
//	system("cls");
//
//	cout << "������� 1-� ������� ������: "; cin >> str;
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
//		cout << "������� " << i + 1 << "-� ������� ������: "; cin >> str;
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
//		cout << "������ ������ " << counter << "-� ������� ������ : " << "[" << pointer->data << "]" << endl;
//		cout << "|-----------------------------------|" << endl;
//		cout << "|1)������� ��������� ������� ������ |\n|2)������� ���������� ������� ������|" << "\n|-----------------------------------|" << "\n�����: "; cin >> choice;
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
//				cout << "|ERROR: ���������� �������� ���|";
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
//				cout << "|ERROR: ����������� �������� ���|";
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
