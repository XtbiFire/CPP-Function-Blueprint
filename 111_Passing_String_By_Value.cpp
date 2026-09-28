/*
◆───────────────────────────────◆
111. Passing String By Value
◆───────────────────────────────◆

💡 Remember

Passing a String by Value
creates a Copy of the
Original String.

Changes inside the Function
do not affect the Original
String.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Change Name Function
void changeName(string name)
{
    name = "Bob";

    cout << "Inside Function : "
         << name << endl;
}

// Main Function
int main()
{
    string name = "Alice";

    changeName(name);

    cout << "Outside Function : "
         << name;

    return 0;
}

/*

▶ Execution Output

Inside Function : Bob

Outside Function : Alice

*/