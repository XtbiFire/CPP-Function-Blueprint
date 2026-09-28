/*
◆───────────────────────────────◆
120. Counting Special Characters
◆───────────────────────────────◆

💡 Remember

Special Characters are
neither Alphabets,
Digits nor Spaces.

Examples:

@  #  $  %  &  !  *  ?

🌐 Code
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Special Character Count Function
int countSpecialCharacters(const string &text)
{
    int count = 0;

    for(char ch : text)
    {
        if(!isalpha(ch) &&
           !isdigit(ch) &&
           ch != ' ')
        {
            count++;
        }
    }

    return count;
}

// Main Function
int main()
{
    string text = "Code@2026#AI!";

    cout << "Special Characters : "
         << countSpecialCharacters(text);

    return 0;
}

/*

▶ Execution Output

Special Characters : 3

*/