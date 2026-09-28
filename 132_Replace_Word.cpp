/*
◆───────────────────────────────◆
132. Replace Word
◆───────────────────────────────◆

💡 Remember

Replacing a Word
means changing one
Word into another.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Replace Word Function
string replaceWord(string text,
                   const string &oldWord,
                   const string &newWord)
{
    size_t position = 0;

    while((position = text.find(oldWord, position))
          != string::npos)
    {
        text.replace(position,
                     oldWord.length(),
                     newWord);

        position += newWord.length();
    }

    return text;
}

// Main Function
int main()
{
    string text = "I love C++. I love games.";

    string result =
        replaceWord(text, "love", "enjoy");

    cout << result;

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

I enjoy C++. I enjoy games.

◆───────────────────────────────◆

*/