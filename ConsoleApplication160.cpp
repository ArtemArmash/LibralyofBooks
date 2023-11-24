#include "Libraly.h"
int main(){	
	LIBRALY libraly;
	Book newBook;
	newBook.Input();
	libraly.addbooks(newBook);
	libraly.PrintResult();
}