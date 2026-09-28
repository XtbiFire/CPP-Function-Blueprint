/*
◆───────────────────────────────◆
148. Passing Function Pointer
◆───────────────────────────────◆

💡 Remember

A Function Pointer can be
passed to another Function
as an Argument.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
using namespace std;

// Add Function
int add(int a, int b)
{
    return a + b;
}

// Execute Function
void calculate(int (*pointer)(int, int))
{
    // Call Function Through Pointer
    cout << "Result : " << pointer(10, 20);
}

// Main Function
int main()
{
    // Pass Function Pointer
    calculate(add);

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

Result : 30

◆───────────────────────────────◆

*/