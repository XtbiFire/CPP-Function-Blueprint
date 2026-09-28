/*
◆───────────────────────────────◆
150. Function Pointer Final Example
◆───────────────────────────────◆

💡 Remember

Function Pointers can store,
pass, and call Functions,
making function selection flexible.

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

// Multiply Function
int multiply(int a, int b)
{
    return a * b;
}

// Execute Function
void calculate(int (*operation)(int, int), int a, int b)
{
    // Call Selected Function
    cout << "Result : " << operation(a, b);
}

// Main Function
int main()
{
    // Pass Add Function
    calculate(add, 10, 20);

    cout << endl;

    // Pass Multiply Function
    calculate(multiply, 10, 20);

    return 0;
}

/*

◆───────────────────────────────◆

▶ Output

Result : 30
Result : 200

◆───────────────────────────────◆

*/