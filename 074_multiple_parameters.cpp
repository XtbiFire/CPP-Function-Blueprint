/*
◆────────────────────────────────────────◆
74. Multiple Parameters
◆────────────────────────────────────────◆

💡 Remember

Pass by Value creates
a separate copy for
each parameter.

Changing one or more
parameters does not
change the original
variables.

*/

#include <iostream>
using namespace std;

// Function
void update(int x, int y)
{
    x += 5;
    y += 10;

    cout << x << " " << y << endl;
}

// Main Function
int main()
{
    int a = 10;
    int b = 20;

    update(a, b);

    cout << a << " " << b;

    return 0;
}

/*

Output:

15 30
10 20

*/
