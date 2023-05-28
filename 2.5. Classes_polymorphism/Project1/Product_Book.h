#pragma once
#include"Product.h"
#include<string>
#include<iostream>

enum E_Book_Genre
{
	E_Book_GenreDrama,
	E_Book_GenreAction,
	E_Book_GenreHoror
};

class Product_Book: Product
{
public:

	virtual E_ProductType GetType()
	{
		return E_ProductTypeBook;
	}

private:
	E_Book_Genre m_genre;
	std::string m_author;
	std::string m_title;

};

