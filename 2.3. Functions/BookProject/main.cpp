#include<iostream>
#include"BookInfo.h"



int main()
{
	BookInfo book1();
	BookSeriesInfoManager BSTest;
	BSTest.getBookSeries()[0].getBooks()[0].setRating(2);



	return 0;
}