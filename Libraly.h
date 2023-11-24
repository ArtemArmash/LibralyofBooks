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
};