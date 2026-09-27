/*
◆────────────────────────────────────────◆
85. Pass by Value vs Pass by Reference
◆────────────────────────────────────────◆

💡 Remember

Pass by Value creates
a copy.

Pass by Reference
works on the original
variable.

*/

#include <iostream>
using namespace std;

// Pass by Value
void value(int x)
{
    x = 50;
}

// Pass by Reference
void reference(int &x)
{
    x = 50;
}

// Main Function
int main()
{
    int a = 20;
    int b = 20;

    value(a);
    reference(b);

    cout << a << endl;
    cout << b;

    return 0;
}

/*

Output:

20
50

*/
