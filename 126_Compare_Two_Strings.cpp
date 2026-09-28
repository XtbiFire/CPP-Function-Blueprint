/*
◆───────────────────────────────◆
126. Compare Two Strings
◆───────────────────────────────◆

💡 Remember

Two Strings are Equal
only when every Character
matches in the same Order.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Compare Function
bool compareStrings(const string &text1,
                    const string &text2)
{
    return text1 == text2;
}

// Main Function
int main()
{
    string first  = "Programming";
    string second = "Programming";

    if(compareStrings(first, second))
    {
        cout << "Strings are Equal";
    }
    else
    {
        cout << "Strings are Different";
    }

    return 0;
}

/*

▶ Execution Output

Strings are Equal

*/