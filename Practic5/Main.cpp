// ������������ ������
#include <iostream>
#include "Structs.h"
int main() {
	setlocale(LC_ALL, "Russian");
	int size = 3, num;
	bool end_work = true;
	Book* massBook = new Book[size];
	Book Idiot{ "�����","������������ �����",1868,678,15 };
	Book NorwegianForest{ "���������� ���","�������� ������",1987,356,580 };
	Book NewWorld{ "� ������ ����� ���","������ �����",1932,242,345 };
	std::string path;
	path = "book.txt";
	massBook[0] = Idiot;
	massBook[1] = NorwegianForest;
	massBook[2] = NewWorld;
	while (end_work)
	{
		std::cout << "�������� ��������:\n";
		std::cout << "1.���������� � �����\n";
		std::cout << "2.��� ������ �����\n";
		std::cout << "3.�������� �����\n";
		std::cout << "4.��������� ����� � ����\n";
		std::cout << "5.�������� ������\n";
		std::cout << "6.���������� ������\n";
		std::cout << "������� ����� -> \n";
		std::cin >> num;
		std::cin.ignore();
		switch (num) {
		case 1:std::cout << "�������� �����:\n1 - �����\n2 - ���������� ���\n3 - � ������ ����� ��� \n4 - ����������� �����\n"; 
			std::cin >>num;
			std::cin.ignore();
			switch (num) {
			case 1:show_book(Idiot); break;
			case 2:show_book(NorwegianForest); break;
			case 3:show_book(NewWorld); break;
			case 4:std::cout << "������� ����� ����� -> ";
				std::cin >> num;
				std::cin.ignore();
				if (num > size )
					std::cout << "����� ����� ���!\n";
				else
					show_book(massBook[num-1]); break;
			default: break;
			}break;
		case 2:
			std::cout << "�������� �����:\n1 - �����\n2 - ���������� ���\n3 - � ������ ����� ��� \n4 - ����������� �����\n";
			std::cin >> num;
			std::cin.ignore();
			switch (num) {
			case 1:std::cout << "��� ������ -> " << author_name(Idiot) << '\n'; break;
			case 2:std::cout << "��� ������ -> " << author_name(NorwegianForest) << '\n'; break;
			case 3:std::cout << "��� ������ -> " << author_name(NewWorld) << '\n'; break;
			case 4:std::cout << "������� ����� ����� -> ";
				std::cin >> num;
				std::cin.ignore();
				if (num > size)
					std::cout << "����� ����� ���!\n";
				else
					std::cout << "��� ������ -> " << author_name(massBook[num]) << '\n'; break;
			default: break;
			}break;
		case 3:add_book(massBook, size++); break;
		case 4:
			std::cout << "�������� �����:\n1 - �����\n2 - ���������� ���\n3 - � ������ ����� ��� \n4 - ����������� �����\n";
			std::cin >> num;
			std::cin.ignore();
			switch (num) {
			case 1:save_book(Idiot, path); break;
			case 2:save_book(NorwegianForest, path); break;
			case 3:save_book(NewWorld, path); break;
			case 4:std::cout << "������� ����� ����� -> ";
				std::cin >> num;
				std::cin.ignore();
				if (num > size)
					std::cout << "����� ����� ���!\n";
				else
					save_book(massBook[num], path); break;
			default: break;
			}break;
		case 5:clear_arr(massBook, size); break;
		case 6:end_work = false; break;
		default: continue;
		}
	}
	std::cout << "\n������ ����������!\n";
	
	return 0;
}
