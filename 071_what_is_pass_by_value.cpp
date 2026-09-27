/*
◆────────────────────────────────────────◆
71. What Is Pass by Value
◆────────────────────────────────────────◆

💡 Remember

Pass by Value means
a copy of the original
variable is passed
to the function.

Any change made inside
the function does not
affect the original
variable.

*/

#include <iostream>
using namespace std;

// Function
void change(int x)
{
    x = 50;
}

// Main Function
int main()
{
    int a = 20;

    change(a);

    cout << a;

    return 0;
}

/*

Output:

20

*/
