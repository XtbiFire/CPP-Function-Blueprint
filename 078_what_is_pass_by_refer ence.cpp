/*
◆────────────────────────────────────────◆
78. What Is Pass by Reference
◆────────────────────────────────────────◆

💡 Remember

Pass by Reference means
a function receives a
reference (alias) of the
original variable.

Any change made inside
the function directly
changes the original
variable.

*/

#include <iostream>
using namespace std;

// Function
void change(int &x)
{
    x = 50;
}

// Main Function
int main()
{
    int a = 20;

    change(a);

    cout << a;

    return 0;
}

/*

Output:

50

*/
