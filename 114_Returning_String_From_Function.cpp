/*
◆───────────────────────────────◆
114. Returning String From Function
◆───────────────────────────────◆

💡 Remember

A Function can return
a String.

The returned String can
be stored in another
String Variable.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Greeting Function
string getGreeting()
{
    return "Welcome";
}

// Main Function
int main()
{
    string message = getGreeting();

    cout << message;

    return 0;
}

/*

▶ Execution Output

Welcome

*/