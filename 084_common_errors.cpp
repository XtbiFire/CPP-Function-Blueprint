/*
◆────────────────────────────────────────◆
84. Common Errors
◆────────────────────────────────────────◆

💡 Remember

Forgetting '&' makes
the function Pass by
Value instead of
Pass by Reference.

*/

#include <iostream>
using namespace std;

// Function
void change(int x)
{
    x = 100;
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

Reason:
'&' is missing, so
original variable
does not change.

*/
