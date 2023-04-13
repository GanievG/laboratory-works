#pragma once
#ifndef _BOOK_H_
#define _BOOK_H_

#include<string>
#include<fstream>
#include"BookType.h"

class Book
{
public:
	Book() = default;

	Book(const std::string& author1, const std::string& name1);

	Book(const Book& other);

	Book& operator = (const Book& other);

	Book(const std::string& author1, const std::string& name1, BookType& type1);

	virtual ~Book();
	
	friend std::ostream& operator<<(std::ostream& stream, const Book& b);//{перегрузка оператора "<<"


	void setAuthor(const std::string& author1);

	void setName(const std::string& name1);

	void setType(const BookType& type1); 

	const BookType getType() const;

	const std::string& getAuthor() const;

	const std::string& getName() const;

	const char* getBookType() const;


private:
	std::string author, name;
	BookType type;
};

#endif // !1
