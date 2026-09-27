/*
◆────────────────────────────────────────◆
73. Original Variable vs Copy
◆────────────────────────────────────────◆

💡 Remember

The original variable
and its copy are stored
in different memory
locations.

Changing the copy
never changes the
original variable.

*/

#include <iostream>
using namespace std;

// Function
void change(int x)
{
    x = 50;

    cout << "Copy: " << x << endl;
}

// Main Function
int main()
{
    int a = 20;

    change(a);

    cout << "Original: " << a;

    return 0;
}

/*

Output:

Copy: 50
Original: 20

*/
