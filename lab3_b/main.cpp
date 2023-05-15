
#include "Header.h"

int main()
{
	vector<Detail*> v;

	v.push_back(createClass<Detail>());
	v.push_back(createClass<Assembly>());
	for (std::vector<Detail*>::iterator it = v.begin(); it != v.end(); ++it)
	{
		delete* it;
	}

	return 0;
}

