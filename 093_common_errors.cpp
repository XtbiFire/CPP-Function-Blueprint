/*
◆────────────────────────────────────────◆
93. Common Errors
◆────────────────────────────────────────◆

💡 Remember

Never use Return by
Reference unless you
really need to modify
the original variable.

*/

#include <iostream>
using namespace std;

int value = 10;

// Function
int& getValue()
{
    return value;
}

// Main Function
int main()
{
    getValue() = 50;

    cout << value;

    return 0;
}

/*

Output:

50

*/
