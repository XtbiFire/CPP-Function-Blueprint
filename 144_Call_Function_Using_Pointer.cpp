/*
◆───────────────────────────────◆
144. Call Function Using Pointer
◆───────────────────────────────◆

💡 Remember

A Function Pointer can call
the Function whose address
it stores.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
using namespace std;

// Hello Function
void hello()
{
    cout << "Hello from Pointer";
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

Hello from Pointer

◆───────────────────────────────◆

*/