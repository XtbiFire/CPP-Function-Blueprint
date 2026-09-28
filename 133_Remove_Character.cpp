/*
◆───────────────────────────────◆
133. Remove Character
◆───────────────────────────────◆

💡 Remember

Removing a Character
means deleting a selected
Character from a String.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Remove Character Function
string removeCharacter(string text, char target)
{
    string result;

    for(char ch : text)
    {
        if(ch != target)
        {
            result += ch;
        }
    }

    return result;
}

// Main Function
int main()
{
    string text = "banana";

    string result =
        removeCharacter(text, 'a');

    cout << result;

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

bnn

◆───────────────────────────────◆

*/