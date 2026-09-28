/*
◆───────────────────────────────◆
131. Replace Character
◆───────────────────────────────◆

💡 Remember

Replacing a Character
means changing one
Character into another.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Replace Character Function
string replaceCharacter(string text,
                         char oldChar,
                         char newChar)
{
    for(char &ch : text)
    {
        if(ch == oldChar)
        {
            ch = newChar;
        }
    }

    return text;
}

// Main Function
int main()
{
    string word = "banana";

    string result =
        replaceCharacter(word, 'a', 'o');

    cout << "Original : "
         << word << endl;

    cout << "Updated  : "
         << result;

    return 0;
}

/*

▶ Execution Output

Original : banana

Updated  : bonono

*/