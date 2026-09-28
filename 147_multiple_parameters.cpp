/*
◆───────────────────────────────◆
147. Function Pointer With Multiple Parameters
◆───────────────────────────────◆

💡 Remember

A Function Pointer can point
to a Function with multiple
Parameters.

◆───────────────────────────────◆

💻 Code
*/

#include <iostream>
using namespace std;

// Calculate Function
int calculate(int a, int b, int c)
{
    return a + b + c;
}

// Main Function
int main()
{
    // Store Function Address
    int (*pointer)(int, int, int) = calculate;

    // Call Function Through Pointer
    int result = pointer(10, 20, 30);

    // Display Result
    cout << "Total : " << result;

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

Total : 60

◆───────────────────────────────◆

*/