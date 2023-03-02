// NumCharConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

std::string ioLabelConverter(int value)
{
    const int asciiValueA = 97;
    std::vector<char> labelCharacters;

    while (value >= 0)
    {
        if (value < 26)
        {
            labelCharacters.push_back(char(value + 'A'));
            value = -1;
        }
        else
        {
            labelCharacters.push_back(char((value / 26 - 1) + 'A'));
            value = (value % 26);
        }
    }
    std::string s(labelCharacters.begin(), labelCharacters.end());
    return s;
}


int main()
{
    std::string a = ioLabelConverter(701);
    std::cout << a << std::endl;
}

// we get a number from the user. 0 to 26 should be A through Z.
// if any number is above 26, we subtract 26 and add an A to our array of chars (increment).
// we can do a vector of ints, and do math and then convert it using the ACI






