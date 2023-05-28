#ifndef HW_06_H
#define HW_06_H


//Task 2
namespace ca
{
    class String
    {
    private:
        char* m_str;
        size_t m_size;
        static const char s_empty_str;
    public:

        String();
        String(const char* s);
        String(const String& other);
        ~String();
        String& operator=(const String& other);
        //task 1
        const char& operator[](size_t index) const;
        //task 3
        String& operator+=(const String& str);
        //task 2
        friend String operator+(const String& str1, const String& str2);
        //task 4
        friend bool operator==(const ca::String& str1, const ca::String& str2);
        friend bool operator!=(const ca::String& str1, const ca::String& str2);
        friend bool operator>(const ca::String& str1, const ca::String& str2);
        friend bool operator>=(const ca::String& str1, const ca::String& str2);
        friend bool operator<(const ca::String& str1, const ca::String& str2);
        friend bool operator<=(const ca::String& str1, const ca::String& str2);
        //task 5
        friend std::ostream& operator<<(std::ostream& out, const ca::String& str);
        friend std::istream& operator>>(std::istream& in, ca::String& str);

        const char* c_str() const;
        size_t size() const;
        
    };
}



#endif 
