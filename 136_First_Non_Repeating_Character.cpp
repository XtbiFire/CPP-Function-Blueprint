/*
◆───────────────────────────────◆
136. First Non-Repeating Character
◆───────────────────────────────◆

💡 Remember

A Non-Repeating Character
appears only once in
the entire String.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
#include <string>
using namespace std;

// First Non-Repeating Character Function
char firstNonRepeatingCharacter(string text)
{
    for(int i = 0; i < text.length(); i++)
    {
        int count = 0;

        for(int j = 0; j < text.length(); j++)
        {
            if(text[i] == text[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            return text[i];
        }
    }

    return '\0';
}

// Main Function
int main()
{
    string text = "swiss";

    char result =
        firstNonRepeatingCharacter(text);

    if(result != '\0')
    {
        cout << "First Non-Repeating Character : "
             << result;
    }
    else
    {
        cout << "No Non-Repeating Character";
    }

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

First Non-Repeating Character : w

◆───────────────────────────────◆

*/