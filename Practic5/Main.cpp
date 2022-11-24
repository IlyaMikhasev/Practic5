// Персональный шаблон
#include <iostream>
#include "Structs.h"
int main() {
	setlocale(LC_ALL, "Russian");
	int size = 3;
	Book* massBook = new Book[size];
	Book Idiot{ "Идиот","Достоевкский Федор",1868,678,15 };
	Book NorwegianForest{ "Норвежский лес","Мураками Харуки",1987,356,580 };
	Book NewWorld{ "О дивный новый мир","Хаксли Олдос",1932,242,345 };
	
	massBook[0] = Idiot;
	massBook[1] = NorwegianForest;
	massBook[2] = NewWorld;
	std::cout << "Книга 1 :\n";
	show_book(Idiot);
	std::cout << "Книга 2 :\n";
	show_book(NorwegianForest);
	std::cout << "Книга 3 :\n";
	show_book(NewWorld);
	std::cout<<"Фамилия автора -> "<<auther_name(Idiot);
	std::string path;
	path = "book.txt";
	save_book(NorwegianForest, path);
	add_book(massBook, size);
	return 0;
}
