/*
◆────────────────────────────────────────◆
88. What Is Return by Reference
◆────────────────────────────────────────◆

💡 Remember

Return by Reference means
a function returns the
original variable instead
of returning its copy.

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
    cout << getNumber();

    return 0;
}

/*

Output:

10

*/
