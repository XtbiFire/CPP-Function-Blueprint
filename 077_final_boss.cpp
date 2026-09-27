/*
◆────────────────────────────────────────◆
77. Final Boss
◆────────────────────────────────────────◆

💡 Remember

Pass by Value sends
a copy of the original
variable.

Any modification inside
the function affects
only the copy.

The original variable
always remains unchanged.

*/

#include <iostream>
using namespace std;

// Function
void update(int x, float y, char z)
{
    x += 5;
    y += 2.5;
    z = '#';

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}

// Main Function
int main()
{
    int a = 10;
    float b = 5.5;
    char c = 'A';

    update(a, b, c);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}

/*

Output:

15
8
#

10
5.5
A

*/
