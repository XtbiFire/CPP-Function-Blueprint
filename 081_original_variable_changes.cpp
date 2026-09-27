/*
◆────────────────────────────────────────◆
81. Original Variable Changes
◆────────────────────────────────────────◆

💡 Remember

Pass by Reference
changes the original
variable because both
the function parameter
and the variable refer
to the same memory.

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
    int number = 20;

    change(number);

    cout << number;

    return 0;
}

/*

Output:

50

*/
