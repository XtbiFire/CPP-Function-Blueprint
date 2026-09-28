/*
◆───────────────────────────────◆
112. Passing String By Reference
◆───────────────────────────────◆

💡 Remember

Passing a String by
Reference does not create
a Copy.

The Function works on the
Original String.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Change Name Function
void changeName(string &name)
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

Outside Function : Bob

*/