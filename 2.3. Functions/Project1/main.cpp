#include<iostream>
#include<string>
#include<fstream>

void printString(std::ostream& stream,const std::string& str="Defaut string")
{
	stream << str;
}
void hw_03_01()
{
	std::string str = "hiiiii";
	const char* str2 = "helloo";
	printString(std::cout, str);
	std::cout << std::endl;
	printString(std::cout, str2);

	std::ofstream output("output.txt");
	printString(output, str);
	output << std::endl;
	printString(output, str2);
}
void hw_03_02()
{
	std::string str = "hiiiii";
	const char* str2 = "helloo";
	printString(std::cerr, str);
	printString(std::cerr);
}

int main()
{
	hw_03_01();
	hw_03_02();

	return 0;
}