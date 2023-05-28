#include<iostream>
#include"vec2.h"


int main()
{
	vec2 a;
	vec2 b(3.4f, 7.8f);
	a = b;
	vec2 c(b);


	std::cout << a.x << " " << a.y << std::endl;
	std::cout << b.x << " " << b.y << std::endl;
	std::cout << c.x << " " << c.y << std::endl;

	return 0;
}