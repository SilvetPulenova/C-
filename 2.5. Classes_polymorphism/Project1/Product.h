#pragma once

enum E_ProductType
{
	E_ProductTypeBook,
	E_ProductTypePen
};

class Product
{
private:

protected:
	typedef double moneyType;
	moneyType m_price;

	virtual void Serialize(std::ofstream& ofs);
	virtual void Deserialize(std::ifstream& ifs);

public:
	//Product();
	virtual E_ProductType GetType() = 0;
};