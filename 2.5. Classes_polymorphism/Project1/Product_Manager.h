#pragma once
#include"Product.h"
#include<vector>
#include<iostream>

class Product_Manager: public Product
{
public:
	void SerializeProduct(std::string& fileName);
	void DeSerializeProduct();

private:
	std::vector<Product> m_products;

};

