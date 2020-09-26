#include <iostream>
#include <vector>
#include <string>

// complexity -> O(n^2)
bool checkIfStringHasUniqueCharacters(std::string str)
{
    if (str.length() > 128) return false;

    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    std::string str;
    std::cin >> str; 
    std::cout << "Your String is -> " << str << std::endl;
    bool result = checkIfStringHasUniqueCharacters(str);
    std::cout << result << std::endl;
}