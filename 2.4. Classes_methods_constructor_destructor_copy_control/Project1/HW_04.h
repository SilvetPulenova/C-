#ifndef HW_04_H
#define HW_04_H


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
        const char* c_str() const;
        size_t size() const;
        
    };
}



#endif 
