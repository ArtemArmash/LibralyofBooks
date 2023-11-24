#pragma once
#include <memory>
using namespace std;
struct Book
{
	char name[50];
	char author[50];
	char year_vipusku[15];

	void Input()
	{
		cout << "Enter the title of the book, its author and release date: ";
		cin.getline(name, sizeof(name));
		cin.getline(author, sizeof(author));
		cin.getline(year_vipusku, sizeof(year_vipusku));
		cout << "\n\n\n\n\n\n";
	}
	void PrintResult() {
		cout << "Books in libraly: \n";
		for (size_t i = 0; i < count_books; i++)
		{
			cout << "Name books: " << books[i].name << "\nAuthor books: " << books[i].author << "\nYear vipusku: " << books[i].year_vipusku << endl;
		}
	}
};