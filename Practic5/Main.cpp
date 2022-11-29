// Персональный шаблон
#include <iostream>
#include "Structs.h"
int main() {
	setlocale(LC_ALL, "Russian");
	int size = 3, num;
	bool end_work = true;
	Book* massBook = new Book[size];
	Book Idiot{ "Идиот","Достоевкский Федор",1868,678,15 };
	Book NorwegianForest{ "Норвежский лес","Мураками Харуки",1987,356,580 };
	Book NewWorld{ "О дивный новый мир","Хаксли Олдос",1932,242,345 };
	std::string path;
	path = "book.txt";
	massBook[0] = Idiot;
	massBook[1] = NorwegianForest;
	massBook[2] = NewWorld;
	while (end_work)
	{
		std::cout << "Выберите действие:\n";
		std::cout << "1.Информация о книге\n";
		std::cout << "2.Имя автора книги\n";
		std::cout << "3.Добавить книгу\n";
		std::cout << "4.Сохранить книгу в файл\n";
		std::cout << "5.Очистить массив\n";
		std::cout << "6.Завершение работы\n";
		std::cout << "Введите номер -> \n";
		std::cin >> num;
		std::cin.ignore();
		switch (num) {
		case 1:std::cout << "Выберите книгу:\n1 - Идиот\n2 - норвежский лес\n3 - о дивный новый мир \n4 - Добавленная книга\n"; 
			std::cin >>num;
			std::cin.ignore();
			switch (num) {
			case 1:show_book(Idiot); break;
			case 2:show_book(NorwegianForest); break;
			case 3:show_book(NewWorld); break;
			case 4:std::cout << "Введите номер книги -> ";
				std::cin >> num;
				std::cin.ignore();
				if (num > size )
					std::cout << "Такой книги нет!\n";
				else
					show_book(massBook[num-1]); break;
			default: break;
			}break;
		case 2:
			std::cout << "Выберите книгу:\n1 - Идиот\n2 - норвежский лес\n3 - о дивный новый мир \n4 - Добавленная книга\n";
			std::cin >> num;
			std::cin.ignore();
			switch (num) {
			case 1:std::cout << "Имя автора -> " << author_name(Idiot) << '\n'; break;
			case 2:std::cout << "Имя автора -> " << author_name(NorwegianForest) << '\n'; break;
			case 3:std::cout << "Имя автора -> " << author_name(NewWorld) << '\n'; break;
			case 4:std::cout << "Имя автора -> " << author_name(massBook[3]) << '\n'; break;
			default: break;
			}break;
		case 3:add_book(massBook, size++); break;
		case 4:
			std::cout << "Выберите книгу:\n1 - Идиот\n2 - норвежский лес\n3 - о дивный новый мир \n4 - Добавленная книга\n";
			std::cin >> num;
			std::cin.ignore();
			switch (num) {
			case 1:save_book(Idiot, path); break;
			case 2:save_book(NorwegianForest, path); break;
			case 3:save_book(NewWorld, path); break;
			case 4:save_book(massBook[3], path); break;
			default: break;
			}break;
		case 5:clear_arr(massBook, size); break;
		case 6:end_work = false; break;
		default: continue;
		}
	}
	std::cout << "\nРабота заавершена!\n";
	
	return 0;
}
