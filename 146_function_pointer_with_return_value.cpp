/*
◆───────────────────────────────◆
146. Function Pointer With Return Value
◆───────────────────────────────◆

💡 Remember

A Function Pointer can store
a Function that returns
a value.

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

// Main Function
int main()
{
    // Store Function Address
    int (*pointer)(int, int) = add;

    // Call Function Through Pointer
    int result = pointer(10, 20);

    // Display Result
    cout << "Sum : " << result;

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

Sum : 30

◆───────────────────────────────◆

*/