#pragma once
#ifndef _CLASS1_H_
#define _CLASS1_H_	
class Class1
{
public:
	Class1() = default;

	Class1(const Class1& other);
	
	Class1& operator=(const Class1& other);

	const int& getM_DATA() const;

	void setM_DATA(const int& m_data);

	virtual~Class1();

protected:
	int m_data;
};
#endif // !1
	//virtual void copy();
	/*Class1(const Class1& other) = default;
	Class1& operator=(const Class1& other) = default;
	*/

	//virtual Class1* clone() const;
	//virtual void print() const;
	
