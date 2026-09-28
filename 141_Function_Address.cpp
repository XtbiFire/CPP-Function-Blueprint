/*
◆───────────────────────────────◆
141. Function Address
◆───────────────────────────────◆

💡 Remember

A Function has a memory
address, just like a variable.

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
    void (*pointer)() = &hello;

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