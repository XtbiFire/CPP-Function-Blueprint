/*
◆───────────────────────────────◆
145. Function Pointer With Parameters
◆───────────────────────────────◆

💡 Remember

A Function Pointer can point
to a Function that accepts
Parameters.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
using namespace std;

// Add Function
void add(int a, int b)
{
    cout << "Sum : " << a + b;
}

// Main Function
int main()
{
    // Store Function Address
    void (*pointer)(int, int) = add;

    // Call Function Through Pointer
    pointer(10, 20);

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

Sum : 30

◆───────────────────────────────◆

*/