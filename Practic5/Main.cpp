// ������������ ������
#include <iostream>
#include "Structs.h"
int main() {
	setlocale(LC_ALL, "Russian");
	int size = 3;
	Book* massBook = new Book[size];
	Book Idiot{ "�����","������������ �����",1868,678,15 };
	Book NorwegianForest{ "���������� ���","�������� ������",1987,356,580 };
	Book NewWorld{ "� ������ ����� ���","������ �����",1932,242,345 };
	
	massBook[0] = Idiot;
	massBook[1] = NorwegianForest;
	massBook[2] = NewWorld;
	std::cout << "����� 1 :\n";
	show_book(Idiot);
	std::cout << "����� 2 :\n";
	show_book(NorwegianForest);
	std::cout << "����� 3 :\n";
	show_book(NewWorld);
	std::cout<<"������� ������ -> "<<auther_name(Idiot);
	std::string path;
	path = "book.txt";
	save_book(NorwegianForest, path);
	add_book(massBook, size);
	return 0;
}
