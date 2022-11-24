#pragma once
#include <iostream>
#include <string>

struct Book {
	std::string name_book;
	std::string NameAuthor;
	int year_publ = 0;
	int score_page = 0;
	int price = 0;
};

void show_book(Book& book);
std::string auther_name(Book& book);
void save_book(Book book, std::string path);
void add_book(Book* mass, int length);
void clear_arr(Book* mass, int length);