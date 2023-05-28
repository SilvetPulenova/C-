#include "Product_Manager.h"
#include"Product.h"
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

void Product_Manager::SerializeProduct(std::string& fileName)
{
	std::ofstream outputFile(fileName);
	if (!outputFile)
	{
		return;
	}
	for (int i = 0; i < m_products[i].size(); i++)
	{
		outputFile<<m_products[i]
	}
}

void Product_Manager::DeSerializeProduct()
{

}