/*
◆───────────────────────────────◆
121. Reverse A String
◆───────────────────────────────◆

💡 Remember

Reversing a String means
printing its Characters
from Last to First.

The First Character
becomes the Last.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Reverse Function
string reverseString(const string &text)
{
    string reversed = "";

    for(int i = text.length() - 1; i >= 0; i--)
    {
        reversed += text[i];
    }

    return reversed;
}

// Main Function
int main()
{
    string word = "Programming";

    cout << "Original : "
         << word << endl;

    cout << "Reversed : "
         << reverseString(word);

    return 0;
}

/*

▶ Execution Output

Original : Programming

Reversed : gnimmargorP

*/