#pragma once

#include"Detail.h"
#include"createClass.h"
#include<vector>
class Assembly: public Detail
{
protected:
	Assembly();

public:
	
	 template<class T> 
	 friend	Detail* createClass();
	
	 virtual~Assembly();
	

};
