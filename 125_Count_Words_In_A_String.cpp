/*
◆───────────────────────────────◆
125. Count Words In A String
◆───────────────────────────────◆

💡 Remember

A Word is separated by
one or more Spaces.

Count every Word,
not every Character.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Word Count Function
int countWords(const string &text)
{
    if(text.empty())
    {
        return 0;
    }

    int count = 0;
    bool insideWord = false;

    for(char ch : text)
    {
        if(ch != ' ')
        {
            if(!insideWord)
            {
                count++;
                insideWord = true;
            }
        }
        else
        {
            insideWord = false;
        }
    }

    return count;
}

// Main Function
int main()
{
    string text = "I Love C++";

    cout << "Words : "
         << countWords(text);

    return 0;
}

/*

▶ Execution Output

Words : 3

*/