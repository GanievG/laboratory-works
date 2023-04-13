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
		throw std::invalid_argument("������");
	}

	else if (count(author1.begin(), author1.end(), ' ') == author1.length()) 
	{
		throw std::invalid_argument("������");
	}

	else if (count(name1.begin(), name1.end(), ' ') == name1.length()) 
	{
		throw std::invalid_argument("������");
	}
	else
	{
		author = author1;
		name = name1;
		type = type1;
	}
}

const char* Book::getBookType() const// "const string& Book::getBookType() const" �� ��������
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
		throw std::invalid_argument("������");
	}
	
	if (count(author1.begin(), author1.end(), ' ') == author1.length())
	{
		throw std::invalid_argument("������");
	}
	
	if (count(name1.begin(), name1.end(), ' ') == name1.length())
	{
		throw std::invalid_argument("������");
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
			throw std::invalid_argument("������, ������������ ��� ������!");
		}
	}
	if (author1.empty()) 
	{
		throw std::invalid_argument("������, �� �������� ��� ������!");
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
			throw std::invalid_argument("������, ������������ ��� ������!");
		}
	}
	if (name1.empty()) 
	{ 
		throw std::invalid_argument("������, �� �������� ��� ������!");
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
	//���������� ��������� "<<"
	std::cout<< "����� - "<< b.getAuthor() << std::endl;
	std::cout<< "�������� - "<< b.getName() << std::endl;
	std::cout << "��� - " <<b.getBookType() << std::endl;
	return stream;
}

