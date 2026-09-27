/*
◆────────────────────────────────────────◆
95. Real-Life Examples & Practice
◆────────────────────────────────────────◆

💡 Remember

Return by Reference is
used when we need to
modify the original
variable.

*/

#include <iostream>
using namespace std;

int health = 100;

// Function
int& getHealth()
{
    return health;
}

// Main Function
int main()
{
    getHealth() -= 20;

    cout << health;

    return 0;
}

/*

Output:

80

*/
