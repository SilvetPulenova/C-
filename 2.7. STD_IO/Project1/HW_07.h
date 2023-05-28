#ifndef HW_07_H
#define HW_07_H

#include<iostream>


//task 1
std::ofstream& open_file_for_writing(std::ofstream& ofs);
//task 2
std::ifstream& open_file_for_reading(std::ifstream& ifs, std::ios_base::openmode mode);
//task 3
void reverse_file(const std::string& filename);

//task 5
void printMinMaxAvg(std::istream& input);

//task 6
void readFloatingPointNumbers(std::istream& input);


#endif
