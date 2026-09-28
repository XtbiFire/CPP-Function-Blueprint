/*
◆───────────────────────────────◆
129. Search Character In String
◆───────────────────────────────◆

💡 Remember

Searching means finding
whether a Character is
present in a String.

If found,

return its Position.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Search Character Function
int searchCharacter(const string &text,
                    char target)
{
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == target)
        {
            return i;
        }
    }

    return -1;
}

// Main Function
int main()
{
    string word = "Programming";
    char target = 'g';

    int index =
        searchCharacter(word, target);

    if(index != -1)
    {
        cout << "Character Found at Index : "
             << index;
    }
    else
    {
        cout << "Character Not Found";
    }

    return 0;
}

/*

▶ Execution Output

Character Found at Index : 3

*/