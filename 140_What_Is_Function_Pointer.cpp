/*
◆───────────────────────────────◆
140. What Is Function Pointer
◆───────────────────────────────◆

💡 Remember

A Function Pointer stores
the address of a function
and can call that function.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
using namespace std;

// Hello Function
void hello()
{
    cout << "Hello from Function";
}

// Main Function
int main()
{
    void (*pointer)() = hello;

    pointer();

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

Hello from Function

◆───────────────────────────────◆

*/