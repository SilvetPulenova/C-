#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"HW_06.h"

const char ca::String::s_empty_str = '\0';

//Task 4
ca::String::String() :m_size(0), m_str(NULL)
{
   /* m_str = new char[1];
    m_str[0] = '\0';
    m_size = 0;*/
}
//Task 3
ca::String::String(const char* s): m_str(0), m_size(strlen(s))
{
    /*if (!s)
    {
        return;
    }*/
    //m_size = strlen(s);
    m_str = new char[m_size + 1];
    strcpy(m_str, s);
}
//Task 6
ca::String::String(const String& other) : m_str(0), m_size(other.m_size)
{
    m_str = new char[other.m_size + 1];
    strcpy(m_str, other.m_str);
}
//Task 5
ca::String::~String()
{
    delete[] m_str;
}
//Task 7
ca::String& ca::String::operator=(const String& other) 
{
    if (this == &other)
    {
        return *this;
    }
    delete[] m_str;

    m_str = new char[other.m_size + 1];
    m_size = other.m_size;
    strcpy(m_str, other.m_str);

    return *this;
}
//Task 2
const char* ca::String::c_str() const
{
    if (!m_str)
    {
        return &s_empty_str;
    }
    return m_str;
}
size_t ca::String::size() const
{
    return m_size;
}

//HW_06

 //task 1
const char& ca::String::operator[](size_t index) const
{
    if (index >= m_size)
    {
        std::cout<<"Index out of range"<<std::endl;
    }
    return m_str[index];
}

//task 3
ca::String& ca::String::operator+=(const String& str)
{
    size_t new_size = m_size + str.m_size;
    char* new_str = new char[new_size + 1];
    std::strcpy(new_str, m_str);
    std::strcat(new_str, str.m_str);

    delete[] m_str;
    m_str = new_str;
    m_size = new_size;

    return *this;
}

//task 2
ca::String operator+(const ca::String& str1, const ca::String& str2)
{
    ca::String result(str1);
    result += str2;
    return result;
}

//task 4
bool ca:: operator==(const ca::String& str1, const ca::String& str2)
{
    return std::strcmp(str1.c_str(), str2.c_str()) == 0;
}

bool ca::operator!=(const ca::String& str1, const ca::String& str2)
{
    return !(str1 == str2);
}

bool ca::operator>(const ca::String& str1, const ca::String& str2)
{
    return std::strcmp(str1.c_str(), str2.c_str()) > 0;
}

bool ca::operator>=(const ca::String& str1, const ca::String& str2)
{
    return std::strcmp(str1.c_str(), str2.c_str()) >= 0;
}

bool ca::operator<(const ca::String& str1, const ca::String& str2)
{
    return std::strcmp(str1.c_str(), str2.c_str()) < 0;
}

bool ca::operator<=(const ca::String& str1, const ca::String& str2)
{
    return std::strcmp(str1.c_str(), str2.c_str()) <= 0;
}

//task 5
std::ostream& ca::operator<<(std::ostream& out, const ca::String& str)
{
    out << str.c_str(); 
    return out;
}
std::istream& ca::operator>>(std::istream& in, ca::String& str)
{
    char buffer[4096]; 
    in >> buffer; 
    str = buffer; 
    return in;
}

