/*
◆───────────────────────────────◆
123. Convert To Uppercase
◆───────────────────────────────◆

💡 Remember

Uppercase means converting
every Letter into a
Capital Letter.

Example:

hello

becomes

HELLO

🌐 Code
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Uppercase Function
string toUpperCase(string text)
{
    for(char &ch : text)
    {
        ch = toupper(ch);
    }

    return text;
}

// Main Function
int main()
{
    string text = "Game Developer";

    cout << "Original  : "
         << text << endl;

    cout << "Uppercase : "
         << toUpperCase(text);

    return 0;
}

/*

▶ Execution Output

Original  : Game Developer

Uppercase : GAME DEVELOPER

*/