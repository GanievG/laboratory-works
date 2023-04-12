#include "DB.h"
#include<iostream>

void DB::add(Class1* object)
{
	db.push_back(object);
}

const void DB::info() const
{
	for (const Class1* obj : db) 
	{
		std::cout << typeid(*obj).name() << std::endl;
	}
}

void DB::my_copy(const Class1& obj)
{
	if (typeid(obj) == typeid(Class1)) {
		db.push_back(new Class1(obj));
	}

	else if (typeid(obj) == typeid(Class2))
	{
		db.push_back(new Class2(dynamic_cast<const Class2&>(obj)));
	}
}

const std::vector<Class1*>& DB::getDB() const 
{
	return db;
}

DB::~DB() 
{
	for (Class1* obj : db)
	{
		if (obj != nullptr) 
		{
			delete obj;
			obj = nullptr;
		}
	}
}
