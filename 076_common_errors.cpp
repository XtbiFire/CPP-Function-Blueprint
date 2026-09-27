/*
◆────────────────────────────────────────◆
76. Common Errors
◆────────────────────────────────────────◆

💡 Remember

Many beginners think
Pass by Value changes
the original variable.

Actually, only the copy
is modified.

*/

#include <iostream>
using namespace std;

// Function
void change(int x)
{
    x = 100;

    cout << "Inside Function: "
         << x << endl;
}

// Main Function
int main()
{
    int a = 20;

    change(a);

    cout << "Inside Main: "
         << a;

    return 0;
}

/*

Output:

Inside Function: 100
Inside Main: 20

*/
