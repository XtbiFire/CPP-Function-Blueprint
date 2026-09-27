/*
◆────────────────────────────────────────◆
96. Final Boss
◆────────────────────────────────────────◆

💡 Remember

Return by Value
returns a copy.

Return by Reference
returns the original
variable.

*/

#include <iostream>
using namespace std;

int value = 50;

// Function
int& getValue()
{
    return value;
}

// Main Function
int main()
{
    getValue() = 100;

    cout << value;

    return 0;
}

/*

Output:

100

*/
