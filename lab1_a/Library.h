#pragma once
#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include<vector>
#include<string>
#include"BookType.h"
#include"Book.h"

struct Library
{

	Library(const Book& book);

	Library() = default;

	bool addBook(const std::string& title, const std::string& author, BookType type);
	
	~Library();

	void setBookInLibrary(const Book& book);
	
	void InformationPrint();

	void CaseInformationPrint();

	const std::vector<Book>& getLibrary() const;

private:

	std::vector<Book> library;

};

#endif // !1
//Library(std::string& author_, std::string& name_, BookType type_);//const 

//Library(std::string& author_, std::string& name_);
