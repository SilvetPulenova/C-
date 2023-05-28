#include<iostream>
#include <string>

class Address 
{
    std::string street;
    std::string city;
    std::string state;

public:
    Address() {};
    Address(std::string street, std::string city, std::string state):street(street),
        city(city), state(state){}
    //TO DO set and get functions
};

class Person 
{
    std::string EGN;
    int height;
    int weight;
    std::string eyeColor;
    std::string firstName;
    std::string lastName;
    Address* address;
public:
    Person() {};
    Person(std::string EGN, int height, int weight, std::string eyeColor,std::string firstName, std::string lastName,Address* address): 
        EGN(EGN), height(height), eyeColor(eyeColor), firstName(firstName), lastName(lastName){}
    //TO DO set and get functions
};

class Employee : protected Person 
{
private:
    double account;
public:
    void deposit(double amount) 
    {
        account += amount;
    }
    void withdraw(double amount) 
    {
        account -= amount;
    }
    void printAccount() 
    {
        std::cout << "Account balance: " << account << std::endl;
    }
};

int main() 
{
    Employee emp;
    emp.deposit(1000);
    emp.printAccount();
    emp.withdraw(500);
    emp.printAccount();

    //TO DO more examples

    return 0;
}

