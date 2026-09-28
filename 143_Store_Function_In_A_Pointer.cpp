/*
◆───────────────────────────────◆
143. Store Function In A Pointer
◆───────────────────────────────◆

💡 Remember

A Function Pointer can store
the address of a compatible
Function.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
using namespace std;

// Hello Function
void hello()
{
    cout << "Hello";
}

// Main Function
int main()
{
    // Store Function Address
    void (*pointer)() = hello;

    // Call Function Through Pointer
    pointer();

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

Hello

◆───────────────────────────────◆

*/