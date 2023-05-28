#include"HW_07.h"
#include<iostream>
#include <fstream>
#include <iomanip>
#include <limits>
#include <stack>



//task 1
std::ofstream& open_file_for_writing(std::ofstream& ofs) 
{
    if (!ofs.is_open()) 
    {
        ofs.clear();
        ofs.open("output.txt");
    }
    return ofs;
}
//task 2
std::ifstream& open_file_for_reading(std::ifstream& ifs, std::ios_base::openmode mode = std::ios_base::in)
{
    if (!ifs.is_open()) 
    {
        ifs.clear();
        ifs.open("input.txt", mode);
    }
    return ifs;
}
//task 3
void reverse_file(const std::string& filename) 
{
    std::ifstream ifs(filename);
    if (!open_file_for_reading(ifs)) 
    {
        std::cerr << "Error: could not open file " << filename << " for reading\n";
        return;
    }

    std::stack<std::string> words;
    std::string word;
    while (ifs >> word) 
    {
        words.push(word);
    }

    std::ofstream ofs(filename + "_reverse");
    if (!open_file_for_writing(ofs)) 
    {
        std::cerr << "Error: could not open file " << filename << "_reverse" << " for writing\n";
        return;
    }

    while (!words.empty()) 
    {
        ofs << words.top() << " ";
        words.pop();
    }
}

//task 5
#include <iostream>
#include <limits>

void printMinMaxAvg(std::istream& input) 
{
    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();
    int count = 0;
    int sum = 0;
    int num;
    while (input >> num) 
    {
        if (num < min) 
        {
            min = num;
        }
        if (num > max) 
        {
            max = num;
        }
        count++;
        sum += num;
    }
    if (count > 0)
    {
        std::cout << "Minimum: " << min << std::endl;
        std::cout << "Maximum: " << max << std::endl;
        std::cout << "Average: " << static_cast<double>(sum) / count << std::endl;
    }
}
//task 6
void readFloatingPointNumbers(std::istream& input)
{
    double min = std::numeric_limits<double>::max();
    double max = std::numeric_limits<double>::min();
    double sum = 0;
    int count = 0;
    double x;
    while (input >> x)
    {
        if (x < min)
        {
            min = x;
        }
        if (x > max)
        {
            max = x;
        }
        sum += x;
        count++;
    }
    std::cout << std::setw(8) << "Minimum: " << std::fixed << std::setprecision(3) << std::right << min << std::endl;
    std::cout << std::setw(8) << "Maximum: " << std::fixed << std::setprecision(3) << std::right << max << std::endl;
    if (count > 0)
    {
        double average = sum / count;
        std::cout << std::setw(8) << "Average: " << std::fixed << std::setprecision(3) << std::right << average << std::endl;
    }
}


