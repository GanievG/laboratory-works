#include "Book.h"
#include<iostream>
#include<algorithm>

Book::~Book() {}

Book::Book(const Book& other)
{
	this->author = other.author;
	this->name = other.name;
	this->type = other.type;
}

Book& Book::operator = (const Book& other)
{
	this->author = other.author;
	this->name = other.name;
	this->type = other.type;
	return *this;
}

Book::Book(const std::string& author1, const std::string& name1, BookType& type1)
{
	if ((author1.empty()) || (name1.empty()) )
	{
		throw std::invalid_argument("Ошибка");
	}

	else if (count(author1.begin(), author1.end(), ' ') == author1.length()) 
	{
		throw std::invalid_argument("Ошибка");
	}

	else if (count(name1.begin(), name1.end(), ' ') == name1.length()) 
	{
		throw std::invalid_argument("Ошибка");
	}
	else
	{
		author = author1;
		name = name1;
		type = type1;
	}
}

const char* Book::getBookType() const// "const string& Book::getBookType() const" не работает
{
	if (this->type == BookType::ART)
	{
		return "Art";
	}
	else if (this->type == BookType::TECH)
	{
		return "Tech";
	}
	else
	{
		return "Unknown";
	}
	
}

Book::Book(const std::string& author1, const std::string& name1) 
{
	if ((author1.empty()) || (name1.empty()))
	{
		throw std::invalid_argument("Ошибка");
	}
	
	if (count(author1.begin(), author1.end(), ' ') == author1.length())
	{
		throw std::invalid_argument("Ошибка");
	}
	
	if (count(name1.begin(), name1.end(), ' ') == name1.length())
	{
		throw std::invalid_argument("Ошибка");
	}
	else
	{
		author = author1;
		name = name1;
	}
}

const std::string& Book::getAuthor() const 
{
	return author;
}


const BookType Book::getType() const 
{
	return type;
}

void Book::setAuthor(const std::string& author1)
{
	if (author1.length() > 0)
	{
		if ((count(author1.begin(), author1.end(), ' ') == author1.length()))
		{
			throw std::invalid_argument("Ошибка, некорректное имя автора!");
		}
	}
	if (author1.empty()) 
	{
		throw std::invalid_argument("Ошибка, не написали имя автора!");
	}
	else
	{ 
		author = author1;
	}

}

void Book::setName(const std::string& name1) {
	if (name1.length() > 0)
	{
		if ((count(name1.begin(), name1.end(), ' ') == name1.length())) 
		{
			throw std::invalid_argument("Ошибка, некорректное имя автора!");
		}
	}
	if (name1.empty()) 
	{ 
		throw std::invalid_argument("Ошибка, не написали имя автора!");
	}
	else 
	{ 
		name = name1; 
	}
}

void Book::setType(const BookType& type1) 
{
	type = type1; 
}

const std::string& Book::getName() const 
{
	return name; 
}

std::ostream& operator<<(std::ostream& stream, const Book& b)
{
	//перегрузка оператора "<<"
	std::cout<< "Автор - "<< b.getAuthor() << std::endl;
	std::cout<< "Назавние - "<< b.getName() << std::endl;
	std::cout << "Тип - " <<b.getBookType() << std::endl;
	return stream;
}

