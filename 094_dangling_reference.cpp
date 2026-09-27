/*
◆────────────────────────────────────────◆
94. Dangling Reference
◆────────────────────────────────────────◆

💡 Remember

Never return a reference
to a local variable.

It creates a Dangling
Reference and leads to
Undefined Behavior.

*/

#include <iostream>
using namespace std;

// Wrong Function
int& getValue()
{
    int x = 10;

    return x;
}

// Main Function
int main()
{
    // cout << getValue();   // ❌ Undefined Behavior

    cout << "Unsafe Example";

    return 0;
}

/*

Output:

Unsafe Example

*/
