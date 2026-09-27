/*
◆────────────────────────────────────────◆
86. Real-Life Examples & Practice
◆────────────────────────────────────────◆

💡 Remember

Pass by Reference is
commonly used when the
original data needs to
be updated.

Examples:
• Bank Balance
• Student Marks
• Player Health
• Game Score

*/

#include <iostream>
using namespace std;

// Function
void increaseHealth(int &health)
{
    health += 20;
}

// Main Function
int main()
{
    int playerHealth = 80;

    increaseHealth(playerHealth);

    cout << playerHealth;

    return 0;
}

/*

Output:

100

*/
