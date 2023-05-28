#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"HW_04.h"

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


