/*
◆───────────────────────────────◆
119. Counting Spaces
◆───────────────────────────────◆

💡 Remember

A Space is also a
Character.

Every Blank Space in a
String should be counted.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Space Count Function
int countSpaces(const string &text)
{
    int count = 0;

    for(char ch : text)
    {
        if(ch == ' ')
        {
            count++;
        }
    }

    return count;
}

// Main Function
int main()
{
    string text = "Hello World C++";

    cout << "Spaces : "
         << countSpaces(text);

    return 0;
}

/*

▶ Execution Output

Spaces : 2

*/