/*
◆───────────────────────────────◆
127. Copy One String To Another
◆───────────────────────────────◆

💡 Remember

Copying a String creates
another String with the
same Characters.

Both Strings become
independent.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Copy Function
string copyString(const string &text)
{
    string copied = text;

    return copied;
}

// Main Function
int main()
{
    string original = "Game";
    string copied = copyString(original);

    cout << "Original : "
         << original << endl;

    cout << "Copied   : "
         << copied;

    return 0;
}

/*

▶ Execution Output

Original : Game

Copied   : Game

*/