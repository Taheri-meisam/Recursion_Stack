
#include <iostream>
#include <vector>


std::string expresionValue= {"2+3+2+4+6"};
int counter=0;
int result =0;
std::vector<char> data;
int  Recursive_func(char val, std::string exv) {
     
    if (counter < expresionValue.length()) {
        data.push_back(val);
        Recursive_func(expresionValue[++counter], expresionValue);
    }
    return result;
 
}

int main()
{
    Recursive_func(expresionValue[0], expresionValue);
    for (auto i : data) {
        std::cout << i << " ";
    }
}

