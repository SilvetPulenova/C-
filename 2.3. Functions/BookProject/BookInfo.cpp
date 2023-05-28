#include<iostream>
#include"BookInfo.h"



void Product::Serialize(std::ofstream& ofs)
{
	ofs << m_price;
}
void Product::Deserialize(std::ifstream& ifs)
{
	ifs >> m_price;
}




