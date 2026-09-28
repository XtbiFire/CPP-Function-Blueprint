/*
◆───────────────────────────────◆
115. Finding String Length
◆───────────────────────────────◆

💡 Remember

The length of a String
is the total number of
Characters it contains.

Spaces are also counted
as Characters.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Length Function
int findLength(const string &text)
{
    return text.length();
}

// Main Function
int main()
{
    string word = "Programming";

    cout << "Length : "
         << findLength(word);

    return 0;
}

/*

▶ Execution Output

Length : 11

*/