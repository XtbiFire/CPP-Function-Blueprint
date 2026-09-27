/*
◆───────────────────────────────◆
91. Returning Original Variable
◆───────────────────────────────◆

💡 Remember

A function returning a
reference gives direct
access to the original
variable.

*/

#include <iostream>
using namespace std;

int number = 10;

// Function
int& getNumber()
{
    return number;
}

// Main Function
int main()
{
    int &ref = getNumber();

    ref = 80;

    cout << number;

    return 0;
}

/*

Output:

80

*/
