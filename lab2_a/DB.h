#pragma once
#ifndef _DB_H_
#define _DB_H_
#include <vector>
#include "Class1.h"
#include "Class2.h"

struct DB
{ 
	DB() = default;
	~DB();
	
	void add(Class1* object);
	
	const void info() const;
	
	void my_copy(const Class1& obj);

	const std::vector<Class1*>& getDB() const;
private:
	std::vector<Class1*> db;
};
#endif // !1

