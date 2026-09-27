/*
◆────────────────────────────────────────◆
82. Multiple Parameters
◆────────────────────────────────────────◆

💡 Remember

More than one variable
can be passed by
reference.

All original variables
can be modified.

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
