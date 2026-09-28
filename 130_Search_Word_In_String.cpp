/*
◆───────────────────────────────◆
130. Search Word In String
◆───────────────────────────────◆

💡 Remember

Searching a Word means
finding whether a Word
exists inside a String.

If found,

return its Starting Index.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Search Word Function
int searchWord(const string &text,
               const string &word)
{
    return text.find(word);
}

// Main Function
int main()
{
    string text = "I Love C++";
    string word = "Love";

    int index = searchWord(text, word);

    if(index != -1)
    {
        cout << "Word Found at Index : "
             << index;
    }
    else
    {
        cout << "Word Not Found";
    }

    return 0;
}

/*

▶ Execution Output

Word Found at Index : 2

*/