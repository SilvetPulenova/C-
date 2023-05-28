#ifndef BOOKINFO_H
#define BOOKINFO_H
#include<string>
#include<vector>
#include<fstream>

class BookSeriesInfo;

class BookInfo
{
public:
	BookInfo(): edition(0), rating(0.0){}
	BookInfo(const std::string& ISBN, const std::string& title, int edition, const std::vector<std::string>& authors,
		const std::vector<std::string>& genres, double rating, const std::vector<BookSeriesInfo*> bookSeriesContainer): ISBN(ISBN),title(title), edition(edition), authors(authors), geners(geners),rating(rating), bookSeriesContainer(bookSeriesContainer) {}

	std::string& getISBN() { return ISBN; }
	const std::string& getISBN() const { return ISBN; }
	const std::string& getTitle() const { return title; }
	int getEdition() const { return edition; }
	const std::vector<std::string>& getAuthors() const { return authors; }
	const std::vector<std::string>& getGeners() const { return geners; }
	double getRating() const { return rating; }

	void setRating(double newRating) { rating = newRating; }



private:
	std::string ISBN;
	std::string title;
	int edition;
	std::vector<std::string> authors;
	std::vector<std::string> geners;
	double rating;
	std::vector<BookSeriesInfo*> bookSeriesContainer;
};

class BookSeriesInfo
{
public:
	BookSeriesInfo(){}
	BookSeriesInfo(const std::string& name,const std::vector<BookInfo*>& books) : m_name(name), m_books(books){}

	std::string getName() const
	{
		return m_name;
	}
	std::vector<BookInfo*> getBooks() const
	{
		return m_books;
	}

private:
	std::string m_name;
	std::vector<BookInfo*> m_books;
};

class BookInfoManager
{
public:
	void LoadBookInfos(){}
	
	size_t GetBookInfosCount() const;
	const BookInfo& GetBookInfo(size_t index) const;

private:
	std::vector<BookInfo*> m_BookInfos;
};

class BookSeriesInfoManager
{
public:
	void addBookSeries(BookSeriesInfo& series)
	{
		seriesList.push_back(series);
	}
	const std::vector<BookSeriesInfo>& getBookSeries() const
	{
		return seriesList;
	}


private:
	std::vector<BookSeriesInfo> seriesList;
};

class BookManager
{
public:
	void loadBookInfos(std::istream& fileName)
	{

	}
	void addBook(BookInfo& book)
	{
		books.push_back(book);
	}
	const std::vector<BookInfo>& getBooks() const
	{
		return books;
	}

private:
	std::vector<BookInfo> books;
};

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

//class InputStream
//{
//
//};
//class OutputStream
//{
//
//};


#endif