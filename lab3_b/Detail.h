#pragma once

#include "createClass.h"
#include<vector>

class Detail
{
protected:
	Detail();
public:
	template <class T>
	friend Detail* createClass();
	virtual ~Detail();
};


