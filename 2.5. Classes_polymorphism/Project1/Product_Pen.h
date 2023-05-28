#pragma once
#include"Product.h"
#include<fstream>
#include<iostream>

enum E_Color
{
	E_Color_Red,
	E_Color_Green
};

class Product_Pen: public Product
{
public:
	virtual E_ProductType GetType()
	{
		return E_ProductTypePen;
	}
	void DeSerialize(std::ostream& out);
	void Serialize(std::istream& in);

private:
	E_Color m_inkColor;

};

