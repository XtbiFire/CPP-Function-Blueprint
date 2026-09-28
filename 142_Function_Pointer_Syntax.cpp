/*
◆───────────────────────────────◆
142. Function Pointer Syntax
◆───────────────────────────────◆

💡 Remember

A Function Pointer uses
the function's return type,
name, and parameter list.

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
    // Function Pointer
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