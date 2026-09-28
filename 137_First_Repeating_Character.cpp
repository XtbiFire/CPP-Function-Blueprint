/*
◆───────────────────────────────◆
137. First Repeating Character
◆───────────────────────────────◆

💡 Remember

A Repeating Character
appears more than once
in a String.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
#include <string>
using namespace std;

// First Repeating Character Function
char firstRepeatingCharacter(string text)
{
    for(int i = 0; i < text.length(); i++)
    {
        for(int j = i + 1; j < text.length(); j++)
        {
            if(text[i] == text[j])
            {
                return text[i];
            }
        }
    }

    return '\0';
}

// Main Function
int main()
{
    string text = "swiss";

    char result =
        firstRepeatingCharacter(text);

    if(result != '\0')
    {
        cout << "First Repeating Character : "
             << result;
    }
    else
    {
        cout << "No Repeating Character";
    }

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

First Repeating Character : s

◆───────────────────────────────◆

*/