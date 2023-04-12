#include "Library.h"
#include<iostream>

Library::~Library() {}

const std::vector<Book>& Library::getLibrary() const 
{
	return Library::library;
}

void Library::CaseInformationPrint()
{
	int artcount = 0;
	int techcount = 0;

	for (const Book& book : Library::library) {
		switch (book.getType()) {
		case BookType::ART:
			++artcount;
			break;
		case BookType::TECH:
			++techcount;
			break;
		}
	}

	std::cout << "Данные:\n";
	std::cout << "Художественных: " << artcount << "\n";
	std::cout << "Технических: " << techcount << "\n";
}

void Library::InformationPrint()
{
	int artcount = 0;
	int techcount = 0;

	for (const Book& book : library)
	{
		if (book.getType() == BookType::ART)
		{
			artcount++;
		}
		else if (book.getType() == BookType::TECH)
		{
			techcount++;
		}
	}

	std::cout << "Данные:\n";
	std::cout << "Художественных: " << artcount << "\n";
	std::cout << "Технических: " << techcount << "\n";
}

Library::Library(const Book& book)
{
	library.push_back(book);
}


bool Library::addBook(const std::string& author, const std::string& title, BookType type)
{
	//if -> push
	if (title.empty() || author.empty()) 
	{
		return false;
	}
	if (count(title.begin(), title.end(), ' ') == title.length()) 
	{
		return false;
	}
	if (count(title.begin(), title.end(), ' ') == title.length()) 
	{
		return false;
	}
	else 
	{
		library.push_back(Book{author, title, type});
		return true;
	}
}

void Library::setBookInLibrary(const Book& book)
{
	if ((book.getAuthor().empty()) || (book.getName().empty()))
	{ 
		throw("Ошибка добавления книги"); 
	}
	else 
	{ 
		library.push_back(book); 
	}
}

//Library::Library(std::string& author_, std::string& name_, BookType type_)//const 
//	{
//		if ((author_.empty()) || (name_.empty()))
//		{ 
//			throw("Ошибка добавления книги"); 
//		}
//		else
//		{
//			library.emplace_back(author_, name_, type_);
//		}
//	}
//
//Library::Library(std::string& author_, std::string& name_)
//{
//	if ((author_.empty()) || (name_.empty()))
//	{ 
//		throw("Ошибка добавления книги");
//	}
//	else
//	{
//		library.emplace_back(author_, name_);
//	}
//}
//std::vector<Book> Library::library{
//		Book("Китлер", "Моя миска", BookType::ART),
//		Book("Пушкин", "Евгений Онегин", BookType::TECH),
//		Book("Страуструп", "Язык программирования C++")
//};
