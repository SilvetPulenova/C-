#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<list>
#include<string>

void removeOdd(std::deque<int>& d) 
{
    for (int i = 0; i < d.size(); i++) 
    {
        if (d[i] % 2 != 0) 
        {
            d.erase(d.begin() + i);
            i--;
        }
    }
}

int main() 
{
    //TO DO: create .h and .cpp files and allocate tasks in functions

    //task 1
    std::vector<int> numbers;
    int n;
    while (std::cin >> n) 
    {
        numbers.push_back(n);
    }
    std::cout << "Numbers in reverse order: ";
    for (int i = numbers.size() - 1; i >= 0; i--) 
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    //task 2
    std::deque<int> numbers2 = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    removeOdd(numbers2);
    for (auto num : numbers2) 
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    //task 3
    std::vector<int> numbers3;
    int m;

    while (std::cin >> m) 
    {
        numbers3.push_back(m);
    }
    sort(numbers3.begin(), numbers3.end());
    auto last = unique(numbers3.begin(), numbers3.end());
    std::cout << "Unique elements: ";
    for (auto it = numbers3.begin(); it != last; it++) 
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //task 4
    std::list<int> numbers4;
    int k;

    while (std::cin >> k) 
    {
        numbers4.push_back(k);
    }

    numbers4.unique();
    std::cout << "Numbers in reverse order: ";
    for (auto it = numbers4.rbegin(); it != numbers4.rend(); it++) 
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    //task 5
    std::string text, word;
    while (std::cin >> word) 
    {
        word[0] = toupper(word[0]);
        text += word + " ";
    }
    reverse(text.begin(), text.end());
    std::cout << text << std::endl;


    return 0;
}
