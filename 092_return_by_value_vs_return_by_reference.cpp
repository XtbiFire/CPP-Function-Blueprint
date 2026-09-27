/*
◆───────────────────────────────◆
92. Return by Value vs Return by Reference
◆───────────────────────────────◆

💡 Remember

Return by Value creates
a copy.

Return by Reference
works on the original
variable.

*/

#include <iostream>
using namespace std;

// Return by Value
int value(int x)
{
    return x;
}

// Return by Reference
int& reference(int &x)
{
    return x;
}

// Main Function
int main()
{
    int a = 20;
    int b = 20;

    // value(a) = 50;   // ❌ Compiler Error

    reference(b) = 50;

    cout << a << endl;
    cout << b;

    return 0;
}

/*

Output:

20
50

*/
