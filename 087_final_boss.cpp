/*
◆────────────────────────────────────────◆
87. Final Boss
◆────────────────────────────────────────◆

💡 Remember

Pass by Reference
allows a function to
modify the original
variable directly.

*/

#include <iostream>
using namespace std;

// Function
void update(int &a, int &b)
{
    a += 5;
    b += 10;
}

// Main Function
int main()
{
    int x = 10;
    int y = 20;

    update(x, y);

    cout << x << " " << y;

    return 0;
}

/*

Output:

15 30

*/
