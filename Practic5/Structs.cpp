#include <iostream>
#include <string>
#include "Structs.h"
#include <fstream>
void show_book(Book& book) {
	std::cout << "Название книги : " <<book.name_book << '\n';
	std::cout << "Фамилия автора : " << book.NameAuthor << '\n';
	std::cout << "Год публикации : " << book.year_publ << '\n';
	std::cout << "Количество страниц : " << book.score_page << '\n';
	std::cout << "Цена экземпляра : " << book.price << "\n\n";
}
void save_book(Book& book, std::string path) {
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		out << book.name_book << '\n';
		out << book.NameAuthor << '\n';
		out << book.year_publ << '\n';
		out << book.score_page << '\n';
		out << book.price << '\n';
		out.close();
		
	}
	else
		out.close();
}

void add_book(Book*& mass,const int length) {
	Book* tmp = new Book[length + 1]{};
	for (int i = 0; i < length; i++)
		tmp[i] = mass[i];
	delete[]mass;
	mass = tmp;
	std::cout << "Введите имя книги -> ";
	getline(std::cin, mass[length].name_book);
	std::cout << "Введите Фамилию и имя автора -> ";
	getline(std::cin, mass[length].NameAuthor);
	std::cout << "Введите год публикации книги -> ";
	std::cin >> mass[length].year_publ;
	std::cout << "Введите количество страниц -> ";
	std::cin >> mass[length].score_page;
	std::cout << "Введите ценик экземпляра -> ";
	std::cin >> mass[length].price;
}
void clear_arr(Book* mass, int length) {
	delete[] mass;
}