/*
◆───────────────────────────────◆
110. What Is String As Function Parameter
◆───────────────────────────────◆

💡 Remember

A String can also be
passed to a Function.

The Function receives the
String and performs the
required task.

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Greeting Function
void greet(string name)
{
    cout << "Hello " << name;
}

// Main Function
int main()
{
    string name = "Alice";

    greet(name);

    return 0;
}

/*

▶ Execution Output

Hello Alice

*/