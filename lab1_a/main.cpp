#include "Header.h"


int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	Library lib;
	lib.addBook("Лев Толстой", "Война и мир", BookType::ART);
	lib.CaseInformationPrint();

	Book b{};
	string s;

	cout<< "\nДобавьте новую книгу в библиотеку..."<<endl;

	cout<< "автор: ";
	getline(cin, s);
	b.setAuthor(s);

	cout<< "Название: ";
	getline(cin, s);
	b.setName(s);

	cout<< "type (0 - art, 1 - tech): ";

	int typebook;
	cin >>typebook;

	if (typebook == 0) 
	{
		b.setType(BookType::ART);
	}
	else if (typebook == 1) 
	{
		b.setType(BookType::TECH);
	}
	else
	{
		b.setType(BookType::UNKNOWN);
	}

	lib.setBookInLibrary(b);


	cout<< endl;
	lib.InformationPrint();

	for (const Book& book : lib.getLibrary()) 
	{
		cout << book << endl;
	}

	cout << endl;
	system("pause");
	return 0;

}
