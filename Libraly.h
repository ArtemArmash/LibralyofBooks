#pragma once
#include <iostream>
#include "BOOK.h"
using namespace std;
struct LIBRALY
{
	Book books[50];
	int count_books;

	LIBRALY() {
		count_books = 0;
	}

	void addbooks(Book& newBook) {
		if (count_books < 50)
		{
			books[count_books] = newBook;
			++count_books;
		}
		else cerr << "Error\n";
	}
	void PrintResult() {
		cout << "Books in libraly: \n";
		for (size_t i = 0; i < count_books; i++)
		{
			cout << "Name books: " << books[i].name << "\nAuthor books: " << books[i].author << "\nYear vipusku: " << books[i].year_vipusku << endl;
		}
	}
};