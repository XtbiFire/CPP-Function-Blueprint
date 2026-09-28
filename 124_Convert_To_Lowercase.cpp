/*
◆───────────────────────────────◆
124. Convert To Lowercase
◆───────────────────────────────◆

💡 Remember

Lowercase means converting
every Letter into a
Small Letter.

Example:

HELLO

becomes

hello

🌐 Code
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Lowercase Function
string toLowerCase(string text)
{
    for(char &ch : text)
    {
        ch = tolower(ch);
    }

    return text;
}

// Main Function
int main()
{
    string text = "GAME DEVELOPER";

    cout << "Original  : "
         << text << endl;

    cout << "Lowercase : "
         << toLowerCase(text);

    return 0;
}

/*

▶ Execution Output

Original  : GAME DEVELOPER

Lowercase : game developer

*/