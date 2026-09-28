/*
◆───────────────────────────────◆
113. Passing String By Const Reference
◆───────────────────────────────◆

💡 Remember

Passing a String by
Const Reference creates
no Copy.

The Function can Read
the String but cannot
Modify it.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Display Function
void displayName(const string &name)
{
    cout << "Name : "
         << name << endl;

    // name = "Bob";   // Error
}

// Main Function
int main()
{
    string name = "Alice";

    displayName(name);

    cout << "Original Name : "
         << name;

    return 0;
}

/*

▶ Execution Output

Name : Alice

Original Name : Alice

*/