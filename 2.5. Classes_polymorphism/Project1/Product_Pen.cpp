#include "Product_Pen.h"
#include"Product.h"
#include<iostream>
#include<fstream>

void Product_Pen::DeSerialize(std::ostream& out)
{
	Product::Deserialize(out);
	out << m_inkColor;
}
void Product_Pen::Serialize(std::istream in)
{
	Product::Serialize(in);
	int Color = -1;
	m_inkColor = static_cast<E_Color>(m_inkColor);
	in >> m_inkColor;
	
}