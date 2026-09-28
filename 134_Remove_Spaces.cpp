/*
◆───────────────────────────────◆
134. Remove Spaces
◆───────────────────────────────◆

💡 Remember

Removing Spaces
means deleting blank spaces
from a String.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Remove Spaces Function
string removeSpaces(string text)
{
    string result;

    for(char ch : text)
    {
        if(ch != ' ')
        {
            result += ch;
        }
    }

    return result;
}

// Main Function
int main()
{
    string text = "C++ Game Developer";

    string result =
        removeSpaces(text);

    cout << result;

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

C++GameDeveloper

◆───────────────────────────────◆

*/