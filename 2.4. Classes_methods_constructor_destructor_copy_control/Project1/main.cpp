#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"HW_04.h"

//task 1
int age = 1;

namespace ca
{
    int age = 2;
    
    namespace cpp
    {
         int age = 3;

        struct Person
        {
            int age;

            Person() :age(4)
            {
                int age = 5;
                std::cout << age << this->age << ca::cpp::age << ca::age << ::age << "\n";
            }
        };
    }
}


int main() 
{

    ca::cpp::Person person;

    ca::String s1; 
    ca::String s2("Hello, world!"); 
    ca::String s3(s2); 

    std::cout << s1.c_str() << std::endl;
    std::cout << s2.c_str() << std::endl;
    std::cout << s3.c_str() << std::endl;

    s1 = s2; 
    std::cout << s1.c_str() << std::endl;

    return 0;
}



